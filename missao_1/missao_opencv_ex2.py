import cv2

imagem = cv2.imread('./dog.jpg')

#a imagem é lida como uma variavel de 3 dimensões (matriz de 3 dimensões), 
#onde cada dimensão representa uma cor no padrão RGB (red, green e blue, respectivamente) com o valor de 0 a 255
(b, g, r) = imagem[0, 0] #captura o valor de B, G e R associado ao pixel de coordenada [0, 0] da imagem

#nos testes que fiz a imagem estava saindo muito grande
#esse código é apenas para reajustar as deminsões da imagem

#o código irá gerar as imagens de todos os exemplos do 2 cap da apostila
#basta fechar uma imagem e aguardar que a próxima irá aparecer

largura = 1000
altura = int(imagem.shape[0] * (largura / imagem.shape[1]))
imagem_redimensionada = cv2.resize(imagem, (largura, altura))

print('O pixel (0, 0) tem as seguintes cores:') 
print('Vermelho:', r, 'Verde:', g, 'Azul:', b) #retorna os valores capturados na linha 7
cv2.imshow("Imagem Original", imagem_redimensionada) #imprime a imagem modificada
cv2.waitKey(0)

#esses loops percorrem todos os pixels da imagem modificando cada um deles
#onde cada um será o resto da divisão do seu valor por 256

for y in range(0, imagem.shape[0]): #percorre linhas da imagem
    for x in range(0, imagem.shape[1]): #percorre colunas da imagem
        imagem[y, x] = (x%256,y%256,x%256) #resto da divisão do valor do pixel por 256

altura = int(imagem.shape[0] * (largura / imagem.shape[1]))
imagem_redimensionada = cv2.resize(imagem, (largura, altura))

cv2.imshow("Imagem modificada", imagem_redimensionada) #imprime a imagem modificada
cv2.waitKey(0)

#nesse caso somente o componente "green" é alterado tendo seu valor com o resutaldo do resto
#de divisão da multiplicação da posição dos pixels dividido por 256

imagem = cv2.imread('./dog.jpg') #atribui novamente a variável "imagem" seu valor inicial

for y in range(0, imagem.shape[0], 1): 
    for x in range(0, imagem.shape[1], 1): 
        imagem[y, x] = (0,(x*y)%256,0)

altura = int(imagem.shape[0] * (largura / imagem.shape[1]))
imagem_redimensionada = cv2.resize(imagem, (largura, altura))

cv2.imshow("Imagem modificada", imagem_redimensionada)
cv2.waitKey(0)

#nesse outro caso a cada salto de 10 linhas e 10 colunas é criado um
#quadrado amarelo de 5x5 pixels, porém o restante da imagem é preservada

imagem = cv2.imread('./dog.jpg') #atribui novamente a variável "imagem" seu valor inicial

for y in range(0, imagem.shape[0], 10): #percorre linhas
    for x in range(0, imagem.shape[1], 10): #percorre colunas
        imagem[y:y+5, x: x+5] = (0,255,255)

altura = int(imagem.shape[0] * (largura / imagem.shape[1]))
imagem_redimensionada = cv2.resize(imagem, (largura, altura))

cv2.imshow("Imagem modificada", imagem_redimensionada)
cv2.waitKey(0)
