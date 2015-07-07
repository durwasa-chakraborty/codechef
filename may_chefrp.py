def main():
    t=int(raw_input())
    i=0
    a=[]
    while (t):
        n=int(input());
        for i in range(0,n):
            x=input() #any idea how to save this variable?
            a.append(x)
            a.sort();
        print function(a,n)
        t=t-1;

def function(a,n):
    count=0
    n=n-1;
    while (n):
        if(a[n]>=2):
            count=count+a[n]
        else:
            count=-1
            break
        n=n-1;
    if n==0:
        count = count+2 if(a[n]>=2) else -1
    return count    

if __name__ == '__main__':
    main()

