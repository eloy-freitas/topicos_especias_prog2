def create_matrix(rowCount):
    mat = [
        [0 for _ in range(rowCount)] 
        for _ in range(rowCount)
    ]

    return mat


if __name__ == '__main__':
    while(True):
        size = int(input())
        fila = []
        if size != 0:
            # monta matrix de adjacência
            alunos = create_matrix(size)
            cores = [-1 for x in range(size)]
            for _ in range(size):
                i = int(input()) - 1
                amigos = [int(x) - 1 for x in input().split(" ")]
                for j in amigos:
                    alunos[i][j] = 1

            fila.append(0)
            cor_atual = 0

            # busca em largura
            while -1 in cores:
                i = fila.pop()
                for j in range(size):
                    if alunos[i][j] == 1 and cores[j] == -1:
                        cores[j] = cor_atual
                        fila.append(j)
                    
                cor_atual = 1 if cor_atual == 0 else 0
                if len(fila) == 0:
                    try:
                        fila.append(cores.index(-1))
                    except:
                        break
                    
            isBipartido = True
 
            # verifica se o grafo é bipartido
            for i in range(size):
                for j in range(size):
                    if alunos[i][j] == 1 and cores[j] == cores[i]:
                        isBipartido = False
                        break
                if not isBipartido:
                    break
                
            print("SIM" if isBipartido else "NAO")
        else:
            break
    

