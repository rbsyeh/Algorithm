////////////////////////////////////////////////////////////////////////////////Binary Search (Iterative Method)
int binarySearch_Iteration(int A[],int n ,int key){

  int lo=0, hi=n-1;
  int mid ;

  while(lo<=hi){
    mid = (lo+hi)>>1;
    if(key==A[mid]){
      return mid+1;
    }
    else if(key<A[mid]){
      hi=mid-1;
    }
    else{
      lo=mid+1;
    }
  }
  return -1;
}
////////////////////////////////////////////////////////////////////////////////Binary Search (Recursive Method)
int binarySearch_Recursion(int A[], int lo, int hi ,int key){

  int mid ;

  if(lo==hi){

    if(key==A[lo]){
      return lo+1;
    }
    else{
      return -1;
    }
  }
  else{
    mid = (lo+hi)>>1;
    if(key==A[mid]){
      return mid+1;
    }
    else if(key<A[mid]){
      return binarySearch_Recursion(A, lo, mid-1, key);
    }
    else{
      return binarySearch_Recursion(A, mid+1, hi, key);
    }
  }
}

////////////////////////////////////////////////////////////////////////////////Binary Search　Tree (Recursive Method)
char binarySearchTree_Recursion(T,int key){
	//T is a tree's root

  if(T!=NULL){
      if(key==T->data)
	  return 'S';//Success
      else if(key<=T->data)
          return binarySearchTree_Recursion(T->lchild, key);
      else 
          return binarySearchTree_Recursion(T->rchild, key);
  }
  else      
      return 'F';//Success
}


////////////////////////////////////////////////////////////////////////////////main function
int main(){

  int Arr[256];
  int i=1;
  int element;
  char stop_enter_data = 'N';
  char user_choose = 'Y';

  printf("Please enter the elements into Array one by one.(Max amounts = 256)\n");
  while(i<255){
    scanf("%d",&element);
    if(element==-1){
        break;
      }
    Arr[i-1]=element;
    i++;
    printf("One more? You can insert %d element(s). Type N or keeping type data.\n",256-i);

    //scanf("%c",&user_choose);

  }

  printf("Insert completely.\n");
  int key;
  printf("Which key would you like to search?\n");
  scanf("%d",&key);

  int key_index=binarySearch_Recursion(Arr, 0, i-1 ,key);

  switch (key_index) {
    case 1:
        printf("It's the first one.");
        break;
    case 2:
        printf("It's the second one.");
        break;
    case 3:
        printf("It's the third one.");
        break;
    case -1:
        printf("Not found.");
        break;
    default:
        printf("It's the %dth one.",key_index);
        break;
  }
return 0;
}
