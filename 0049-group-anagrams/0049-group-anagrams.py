class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        hashmap = dict()
        
        for str in strs:
            key = "".join(sorted(str))
            print(key)
            if key in hashmap:
                hashmap[key].append(str)
            else:
                hashmap[key]= [str]
        res = []
        for key in hashmap:
            res.append(hashmap[key])
        return res
        