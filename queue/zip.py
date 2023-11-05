names = ['Timi', "Posi", "Mama k", "time"]
scores = [85,92, 78]

#combine the two lists using zip
combine_data = zip(names, scores);

#Convert the result to a list for printing
result_list = list(combine_data);

print(result_list)