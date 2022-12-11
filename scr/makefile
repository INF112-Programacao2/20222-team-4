sistema: estoque.o funcionario.o gerencia.o gerente.o main.o pagamento.o produto.o vendas.o vendedor.o itemcarrinho.o
	g++ -o main estoque.o funcionario.o gerencia.o gerente.o main.o pagamento.o produto.o vendas.o vendedor.o itemcarrinho.o

estoque.o:estoque.cpp estoque.h
	g++ -c estoque.cpp
	
funcionario.o:funcionario.cpp funcionario.h
	g++ -c funcionario.cpp

gerencia.o:gerencia.cpp gerencia.h
	g++ -c gerencia.cpp

gerente.o:gerente.cpp gerente.h
	g++ -c gerente.cpp

main.o:main.cpp 
	g++ -c main.cpp

pagamento.o:pagamento.cpp pagamento.h
	g++ -c pagamento.cpp

produto.o:produto.cpp produto.h
	g++ -c produto.cpp

vendas.o:vendas.cpp vendas.h
	g++ -c vendas.cpp

itemcarrinho.o:itemcarrinho.cpp itemcarrinho.h
	g++ -c itemcarrinho.cpp

vendedor.o:vendedor.cpp vendedor.h
	g++ -c vendedor.cpp

clean:
	rm -rf *.o

vai:
	./main