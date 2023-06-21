def Uniq(list):
    """ Returns unique values of a list """
    if isinstance(list, dict):
        raise TypeError("Input must be a list")
    u_list = []
    for item in list:
        if item not in u_list:
            u_list.append(item)
    return u_list
