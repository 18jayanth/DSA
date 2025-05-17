class Solution {
    
    public static ArrayList<Integer> findUnion(int a[], int b[]) {
        
        int i = 0, j = 0; 
  ArrayList<Integer > Union=new ArrayList<>();
  int n=a.length;
  int m=b.length;
  while (i < n && j < m) {
    if (a[i] <= b[j]) 
    {
      if (Union.size() == 0 || Union.get(Union.size()-1) != a[i])
        Union.add(a[i]);
      i++;
    } else 
    {
      if (Union.size() == 0 || Union.get(Union.size()-1) != b[j])
        Union.add(b[j]);
      j++;
    }
  }
  while (i < n) 
  {
    if (Union.get(Union.size()-1) != a[i])
      Union.add(a[i]);
    i++;
  }
  while (j < m) 
  {
    if (Union.get(Union.size()-1) != b[j])
      Union.add(b[j]);
    j++;
  }
  return Union;
}
    
}
