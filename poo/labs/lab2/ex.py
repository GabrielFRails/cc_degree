def main():
	pass

class Compositor():
	def __init__(self, nome=None, pais=None, musicas=[]):
		self.nome = nome
		self.pais = pais
		self.musicas = musicas
	
	def get_compositor(self):
		data = {
			"nome": self.nome,
			"pais": self.pais
		}

		return data
	
	def listar_musicas(self):
		return self.musicas

	def definir_musicas(self, musicas):
		self.musicas.append(musicas)
	
class Musica():
	def __init__(self, titulo=None, duracao=None, compositor=None):
		self.titulo = titulo
		if isinstance(compositor, Compositor):
			self.compositor = compositor
	
	def get_musica(self):
		data = {
			"titulo": self.titulo,
			"duracao": self.duracao,
			"compositor": self.compositor.get_compositor()
		}

		return data

	def mostrar_compositor(self):
		data = self.compositor.get_compositor()
		return data

if __name__ == "__main__":
	main()