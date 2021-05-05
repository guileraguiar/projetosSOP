#!/bin/bash

# O programa deve receber o nome do arquivo a ser compilado.
echo Informe o nome do arquivo
read arquivo

# Verifique se o arquivo .java existe. Caso não existir, mostre uma mensagem.
if [[ -f /home/guileraguiar/Documentos/GitHub/projetosSOP/atv_bash/$arquivo.java ]]
then
     	echo "O arquivo $arquivo.java existe"
else 
    	echo "O arquivo $arquivo.java não existe."
fi

# Verifique se o arquivo .class existe no diretório. Caso existir, faça a exclusão.
if [[ -f /home/guileraguiar/Documentos/GitHub/projetosSOP/atv_bash/$arquivo.class ]]
then
	echo "O arquivo $arquivo.class existe. Arquivo será deletado agora."
    	rm $arquivo.class
else 
    	echo "O arquivo $arquivo.class não existe"
fi

# Compile o código .java
if [[ -f /home/guileraguiar/Documentos/GitHub/projetosSOP/atv_bash/$arquivo.java ]]
then
	echo "Arquivo $arquivo.java compilado."
    	javac $arquivo.java
else
    	echo "Não foi possível compilar o arquivo, Verifique se existe um arquivo chamado $arquivo.java"
fi

# Verifique se o arquivo .class foi gerado. Caso não, informe que o código não compilou e gerou erro.
Caso sim, execute o código Java.
if [[ -f /home/guileraguiar/Documentos/GitHub/projetosSOP/atv_bash/$arquivo.class ]]
then
     	echo "O arquivo $arquivo.class foi gerado."
    	java $arquivo
else 
    	echo "Ocorreu um erro. Código não compilado."
fi
