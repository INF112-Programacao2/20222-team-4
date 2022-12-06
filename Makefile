all:	estoque.o produto.o pagamento.o funcionario.o gerente.o vendedor.o GerenciarFuncionario.o GerenciarVendas.o cliente.o venda.o main.o
	g++ -o estoque.o produto.o pagamento.o funcionario.o gerente.o vendedor.o GerenciarFuncionario.o GerenciarVendas.o cliente.o venda.o main.o

estoque.o:	estoque.cpp estoque.h
	g++ -c estoque.cpp

produto.o:	produto.cpp produto.h
	g++ -c produto.cpp

pagamento.o:	pagamento.cpp pagamento.h
	g++ -c pagamento.cpp

funcionario.o:	funcionario.cpp funcionario.h
	g++ -c funcionario.cpp
	

gerente.o: gerente.cpp gerente.h
	g++ -c gerente.cpp

vendedor.o:	vendedor.cpp vendedor.h
	g++ -c vendedor.cpp

GerenciarFuncionario.o: GerenciarFuncionario.cpp GerenciarFuncionario.h
	g++ -c GerenciarFuncionario.cpp

GerenciarVendas.o: GerenciarVendas.cpp GerenciarVendas.h
	g++ -c GerenciarVendas.cpp

cliente.o: cliente.cpp cliente.h
	g++ -c cliente.cpp

venda.o: venda.cpp venda.h
	g++ -c venda.cpp

main.o: main.cpp estoque.h produto.h pagamento.h funcionario.h gerente.h vendedor.h GerenciarFuncionario.h GerenciarVendas.h cliente.h venda.h
	g++ -c pagamento.cpp

clean: 
	rm -rf *.o

run:
	./main