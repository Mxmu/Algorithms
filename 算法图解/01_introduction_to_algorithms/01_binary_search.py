#coding=utf-8
#Version:python3.6.0
#Tools:Pycharm 2017.3.2
_date_ = '2019/5/6 19:21'
_author_ = 'YouChao'


def binary_search(list,item):
    low=0
    high=len(list)-1

    while low<=high:
        mid=(low+high)//2  ##卧槽打成/还用不了啊！！
        guess=list[mid]

        if guess==item:
            return mid

        if guess>item:
            high=mid-1

        else:
            low=mid+1

    return None

my_list=[1,3,5,7,9]

print(binary_search(my_list, 3)) # => 1
print(binary_search(my_list, -1)) # => None
