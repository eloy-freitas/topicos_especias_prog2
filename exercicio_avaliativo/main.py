def create_matrix(rowCount):
    mat = []
    for i in range(rowCount):
        rowList = []
        for j in range(rowCount):
            rowList.append(-1)
        mat.append(rowList)

    return mat


if __name__ == '__main__':
    fila = []
    
    while(True):
        size = int(input())
        if size != 0:
            alunos = create_matrix(size)
            cores = [-1 for x in range(size)]
            for x in range(size):
                i = int(input()) - 1
                amigos = [int(x) - 1 for x in input().split(" ")]
                for j in amigos:
                    alunos[i][j] = 1

            fila.append(0)
            cor_atual = 0

            # busca em largura
            while len(fila) != 0:
                i = fila.pop()
                for j in range(size):
                    if alunos[i][j] == 1 and cores[j] == -1:
                        cores[j] = cor_atual
                        fila.append(j)
                cor_atual = 1 if cor_atual == 0 else 0
                    
            
            result = True
            
            #verifica se o grafo é bipartido
            for i in range(size):
                for j in range(size):
                    if alunos[i][j] == 1 and cores[j] == cores[i]:
                        result = False
                        break
                if not result:
                    break

            print("SIM" if result else "NAO")
        else:
            break
    

