#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main()
{
	float s,p,q,r,t;
	int fu, fd;
	int hu, hd;
	srand((int)time(0));
	for (int i = 0; i < 10; i++)
	{
		
		s = float(rand()) / float(RAND_MAX);
		p = float(rand()) / float(RAND_MAX);
		q = float(rand()) / float(RAND_MAX);
		r = float(rand()) / float(RAND_MAX);
		t = float(rand()) / float(RAND_MAX);
		fd = int(q * 21);
		fu = int(p * 21);

		if (fu >= fd)
		{
			int swap;
			swap = fu;
			fu = fd;
			fd = swap;
		}

		hu = int(r * 7);
		hd = int(t * 7);

		if (hu >= hd)
		{
			int swap;
			swap = hu;
			hu = hd;
			hd = swap;
		}

		//printf("%f,%f\n", p, q);
		//printf("%d,%d\n", fu,fd);
		printf("生成的分数算式为:%d/%d + %d/%d + %d/%d\n", hu, hd, fu, fd, (fd - fu), fd);
	}
	system("pause");
	return(0);
	
}