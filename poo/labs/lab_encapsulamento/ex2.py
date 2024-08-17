def main():
# {
	ludovico = Compositor("Ludovico Einaudi", "Itália")
	musicas_ludovico = ["Experience", "Nuvole Bianche", "Una Matina"]
	ludovico.definir_musicas(musicas_ludovico)
	Compositor.total_compositores += 1
	
	beethoven = Compositor("Beethoven", "Germânia")
	musicas_beethoven = ["Sonata", "Fur Elise", "Symphony No. 5"]
	beethoven.definir_musicas(musicas_beethoven)
	Compositor.total_compositores += 1

	print(f"Compositor {ludovico.get_nome()}, Suas músicas:")
	ludovico.listar_musicas()

	print(f"\nCompositor {beethoven.get_nome()}, Suas músicas:")
	beethoven.listar_musicas()

	print(f"\nTotal de compositores: {Compositor.total_compositores}")
# }

class Musica():
	def __init__(self, titulo, compositor):
		self.titulo = titulo
		self.compositor = compositor

	def mostrar_compositor(self):
		data = self.compositor.__dict__
		print(data)
	
	def get_titulo(self):
		return self.titulo
	
	def set_titulo(self, titulo):
		self.titulo = titulo
	
	def get_compositor(self):
		data = self.compositor.__dict__
		return data
	
	def set_compositor(self, compositor):
		self.compositor = compositor

class Compositor():
	total_compositores = 0

	def __init__(self, nome, pais): # pais = país de origem, colocando sem acento para evitar falhas em compilação execução
		self.nome = nome
		self.pais = pais
		self.musicas = []
	
	def listar_musicas(self):
		musicas = self.musicas
		quantidade_musicas = len(musicas)

		for i in range(quantidade_musicas):
			print(f"Música {i}: {musicas[i].get_titulo()}")
		
		return ""
	
	def definir_musicas(self, titulo_musicas):
		for t in titulo_musicas:
			musica = Musica(t, self.get_nome())
			self.musicas.append(musica)	
	
	def get_nome(self):
		return self.nome
	
	def set_nome(self, nome):
		self.nome = nome
	
	def get_pais(self):
		return self.pais
	
	def set_pais(self, pais):
		self.pais = pais
	
	def get_total_compositores(self):
		return self.total_compositores

if __name__ == "__main__":
	main()