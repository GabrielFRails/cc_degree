class FuncionarioBase(object):
	nome = None
	sobrenome = None

	def __init__(self, nome=None, sobrenome=None):
		if nome is not None:
			self.nome = nome
		
		if sobrenome is not None:
			self.sobrenome = sobrenome

	def set_nome(self, nome):
		self.nome = nome
	
	def set_sobrenome(self, sobrenome):
		self.sobrenome = sobrenome

	def get_nome(self):
		return self.nome

	def get_sobrenome(self):
		return self.sobrenome

class Administrador(FuncionarioBase):
	salario_mensal = None

	def set_salario_mensal(self, salario):
		self.salario_mensal = salario
	
	def get_salario_mensal(self):
		return float(self.salario_mensal)

class Gerente(FuncionarioBase):
	salario_mensal = None
	salario_base = None
	bonificacao = None

	def set_salario_mensal(self):
		self.salario_mensal = self.salario_base + self.bonificacao
	
	def get_salario_mensal(self):
		return float(self.salario_mensal)

	def set_bonificacao(self, bonificacao):
		self.bonificacao = bonificacao
    
	def get_bonificacao(self):
		return self.bonificacao
	
	def set_salario_base(self, salario_base):
		self.salario_base = salario_base

	def get_salario_base(self):
		return self.salario_base
	
class Comissionado(FuncionarioBase):
	salario_base = None
	total_vendas = None
	percentual_comissao = None
	salario = None

	def set_salario_base(self, salario_base):
		self.salario_base = salario_base

	def get_salario_base(self):
		return self.salario_base

	def set_total_vendas(self, total_vendas):
		self.total_vendas = total_vendas

	def get_total_vendas(self):
		return self.total_vendas
	
	def set_percentual_comissao(self, percentual_comissao):
		self.percentual_comissao = percentual_comissao

	def get_percentual_comissao(self):
		return self.percentual_comissao
	
	def calcular_salario(self):
		total_vendas = self.get_total_vendas()
		percentual_comissao = self.get_percentual_comissao()
		salario_base = self.get_salario_base()

		if percentual_comissao < 0 and percentual_comissao > 100:
			return

		comissao = total_vendas * (percentual_comissao/100)

		salario = comissao + salario_base

		self.salario = float(salario)
	
	def get_salario(self):
		self.calcular_salario()
		return self.salario

class Horista(FuncionarioBase):
	valor_hora = None
	horas_trabalhadas = None
	pagamento = None

	def set_valor_hora(self, valor_hora):
		self.valor_hora = valor_hora
	
	def get_valor_hora(self):
		return self.valor_hora

	def set_horas_trabalhadas(self, horas_trabalhadas):
		self.horas_trabalhadas = horas_trabalhadas
	
	def get_horas_trabalhadas(self):
		return self.horas_trabalhadas

	def calcular_pagamento(self):
		horas_trabalhadas = self.get_horas_trabalhadas()
		valor_hora = self.get_valor_hora()

		pagamento = horas_trabalhadas * valor_hora

		self.pagamento = float(pagamento)
	
	def get_pagamento(self):
		self.calcular_pagamento()
		return self.pagamento

