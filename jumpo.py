def main():
	a = int(raw_input())
	if(a%6==0 or a%6==3 or a%6==1):
		print "yes"
	else:
		print "no"

if __name__ == '__main__':
	main()