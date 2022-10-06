

if __name__ == '__main__':
    
    candidatos = []
    while(True):
        try:
            valores = input().split(' ')
            candidatos.append(
                {
                    'nome': valores[0],
                    'sobre_nome': valores[1],
                    'altura': int(valores[2]),
                    'peso': int(valores[3]),
                    'ordem': (abs(180 - int(valores[2])) + abs(75 - int(valores[3])))
                }
            )
            
        except:
            break

    size = len(candidatos)
    
    for i in range(0, size):
        min = i
        for j in range(i, size):
            if (candidatos[j]['ordem'] < candidatos[min]['ordem']):
                min = j
            else:
                if (candidatos[j]['ordem'] == candidatos[min]['ordem'] 
                    and candidatos[j]['sobre_nome'] < candidatos[min]['sobre_nome']
                ):
                    min = j
           
            aux = candidatos[i]
            candidatos[i] = candidatos[min]
            candidatos[min] = aux

    for c in candidatos:
        print(f"{c['sobre_nome']}, {c['nome']}")
    print(' ')
