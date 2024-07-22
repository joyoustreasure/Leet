# class Solution(object):
#     def sortPeople(self, names, heights):
#         tmp = []
#         for i in range(len(names)):
#             name, height = names[i], heights[i]
#             tmp.append((name,height))
#         tmp.sort(key=lambda x: x[1])
#         tmp = tmp[::-1]
#         ans = []
#         for x in tmp:
#             ans.append(x[0])
#         return ans


class Solution(object):
    def sortPeople(self, names, heights):
        tmp = sorted(zip(names, heights), key=lambda x: x[1], reverse=True)
        return [name for name, height in tmp]
