def main():
    test = input()
    array = list()

    while(test != 0):
        array = []
        
        count=0
        pair=0
        x =raw_input()
        array = x.split()
        for i in range(0,6):
            count=0
            solution=0
            if(i%2 == 0):
                k=(i+2)%6
                while(count<4):
                    if(array[i]==array[(k)%6]):
                        solution+=1
                    count+=1
                    k+=1
                if(solution>=2):
                    pair+=1
            elif(i%2!=0):
                j=i+1
                while(count<4):
                    if(array[i]==array[(j)%6]):
                        solution+=1
                    count+=1
                    j+=1
                if(solution>=2):
                        pair+=1
        if(pair>=3):
            print "YES"
        else:
            print "NO"

        test=test-1

main()