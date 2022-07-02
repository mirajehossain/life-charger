class Solution:
    
    def do_binary_search(self, arr: List[int], target: int) -> bool:
        low = 0
        high = len(arr) - 1
        
        while low <= high:
            mid = (low + high) // 2
            
            if arr[mid] == target:
                return True
            elif arr[mid] < target:
                low = mid + 1
            else:
                high = mid - 1
        return False
        
        
    def check_target_row(self, matrix: List[List[int]], target: int) -> int:
            low = 0
            high = len(matrix) - 1
            
            while low <= high:
                mid = (low + high) // 2
                if matrix[mid][-1] < target:
                    low = mid + 1
                elif matrix[mid][0] > target:
                    high = mid - 1
                else:
                    return mid
            return low
        
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
           
        final_row = self.check_target_row(matrix, target)
        if final_row > len(matrix) - 1:
            return False
        
        return self.do_binary_search(matrix[final_row], target)
          
