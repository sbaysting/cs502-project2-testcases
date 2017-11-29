main (){

	int x;
	int y;
	int z;

	switch(x){
		case 1 : y = 1;
				 break;
		case 2 : y = 2;
				 break;
		case 3 : y = 3;
				 break;
		default : y = 6;
				  break;

	}

	x = y + 1;


	switch(x){
		case 1 : y = 1;
				
		case 2 : y = 2;
				 
		case 3 : y = 3;
				 z = 1;
				 break;
		default : y = 6;
				  z = 2;

	}

	x = z + 1;

	int k;
	switch(x){
		case 1 : y = 1;
				
		case 2 : y = 2;
				 k = 1;
				 
		case 3 : y = 3;
				 break;
		default : y = 6;
				  k = 2;

	}

	x = k + 1;

	int r;
	int j;
	k = 1;
	switch(x){
		case 1 : r = 1;
				 j = 1;
				 break;
				
		case 2 : y = 2;
				 k = 1;
				 while(k){
					 r = 2;
					 j =2;
				 }
				
				 
		case 3 : y = 3;
				while(y){
					r = 2;
				  }
				 j = 3;
				 break;				
		default : y = 6;
				  k = 2;
				  r = 2;
				  j = 3;
				  break;

	}

	x = j * r;








}
