class Solution:
    def is_num(self, s: str) -> bool:
        return s >= '0' and s <='9'

    def check_int_range(self,number: int) -> int:
        if number > ((1<<31) - 1):
            return ((1<<31) - 1)
        elif number < -(1<<31):
            return -(1<<31)
        else:
            return number
            
    
    def get_final_result(self, s: str) -> int:
        final_result = ''
        if not s:
                return 0
        for c in s:
            if self.is_num(c):
                final_result += c
            elif c in ['+', '-'] and not final_result:
                final_result += c
            else:
                break

        if not len(final_result):
            return 0
        else:
            try:
                final_result = self.check_int_range(int(final_result))
            except:
                return 0
        return final_result
    
    def myAtoi(self, s: str) -> int:
        s = s.lstrip()
        return self.get_final_result(s)
   
