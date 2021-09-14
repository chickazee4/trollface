const char happy[] = 
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀          \n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣶⠟⠛⠛⠛⠛⠛⣛⣻⣿⣿⣿⣿⣿⣟⣛⣛⣛⠛⠒⠲⠶⠦⣤⣤⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⠏⠁⠀⠀⢀⣤⠶⣛⣩⣥⠤⠤⠤⠤⢤⣤⣤⣭⣭⣉⣉⣛⣛⣻⣭⣥⠬⡍⠛⢶⣄⡀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⠃⠀⠀⣠⡶⢋⡵⢛⡩⠵⠒⠒⠒⠒⠢⡀⠀⠀⠀⠀⠀⢀⣠⠤⠤⠤⢤⣄⠀⠀⠀⠉⠻⣆⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⢀⣿⠃⠀⠀⠘⢁⡴⢋⣴⢿⠒⠈⠉⣏⠉⠐⠒⡾⣄⠀⠀⠀⠀⠀⡠⠀⠀⢀⣀⣈⣙⣆⡀⠀⠀⢹⡆⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⣠⣾⠃⠀⠀⠀⠀⠀⢀⠟⣁⠀⠁⢀⣤⣦⣤⡀⠘⠀⢈⣷⡄⠀⠀⠀⣇⠖⠉⠙⠅⠀⠀⠉⠉⠑⢦⡈⣷⡀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⢠⣾⢿⣧⠤⠤⠤⠄⠀⠖⣿⠀⠃⠀⠀⣿⣿⣿⣿⡗⠀⠐⠁⢸⡇⠀⣀⣰⠉⠠⠀⠀⣰⣶⣷⣶⠀⠀⠀⢱⡈⢻⣦⠀⠀⠀\n\
⠀⠀⠀⣠⡿⣱⠋⢀⣴⠶⠚⠻⢶⣤⡘⢧⣄⠆⠂⠀⡉⠉⣉⣀⣀⠉⣠⡟⠁⠀⠉⢻⣆⠀⠀⠀⠘⠛⠟⠛⠀⠀⢈⡿⢍⢢⢹⡇⠀⠀\n\
⠀⠀⢠⣿⠁⡇⢠⣿⠁⠀⢰⣦⡀⠉⠉⠀⠈⠙⠲⠾⠾⠶⠶⠶⠚⠋⠉⠀⠀⠀⠀⢸⣯⡑⠢⢤⣀⣂⣀⣨⠤⠒⠛⠃⠘⡆⡇⡧⠀⠀\n\
⠀⠀⢸⣿⠀⡇⢸⡇⢠⣴⣾⠋⠛⢷⣦⣀⠀⠀⠀⠠⠤⠤⠴⢠⠶⠒⠀⠀⠀⠀⠀⠀⠉⢿⣦⡀⠀⠀⠀⠀⢸⣷⠀⠀⡼⢡⢣⡇⠀⠀\n\
⠀⠀⠀⢿⡇⣧⠘⠿⠀⠀⠸⣧⡀⠀⠈⢻⡿⢶⣦⣄⡀⠀⠀⠸⣆⠐⠟⠻⠷⠀⠀⠀⢀⣾⠛⠃⠑⠤⠀⢀⣼⣿⡇⢀⠤⢂⣾⠃⠀⠀\n\
⠀⠀⠀⠈⢻⣌⠑⠦⠀⠀⠀⢿⣿⣷⣤⣸⣷⡀⠀⠈⠙⠻⢿⣶⣤⣄⣀⡀⠀⠀⠙⠿⠟⠁⠀⠀⢀⣠⡴⣿⠉⣿⣿⠀⠀⣼⠁⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠙⣷⡀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣶⣤⣀⣀⣼⠁⠀⠈⠉⠙⣿⠛⠛⠻⢿⠿⠛⠛⢻⡇⠀⢸⡀⣹⣿⠀⠀⡏⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠈⢿⡀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣤⣤⣄⣀⣿⣄⣀⣀⣸⣄⣀⣠⣴⣿⣶⣿⣿⣿⣿⡇⠀⡇⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠈⢷⡄⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⡇⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⣦⠀⠘⣿⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⣷⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢷⣄⠘⢷⡀⠘⡟⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⣿⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣧⡀⠻⣾⡃⠀⠀⠈⠙⢿⡿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⣿⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢿⣄⠈⠻⣦⡀⠀⠀⡼⠀⠀⠈⠙⠻⣿⠿⠿⠿⢿⣿⣿⣿⣿⣿⣿⣿⢿⡿⣹⠇⠀⣿⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣷⣄⠈⠛⠷⣼⣇⡀⠀⠀⠀⠀⣿⠀⠀⠀⢸⡇⠀⠀⡿⠀⢸⠇⣘⣧⠟⠀⢀⡿⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⢷⣄⡀⠀⠙⠻⠷⠶⣶⣾⣿⣤⣀⣠⣿⣄⣀⣴⠷⠶⠿⠿⠟⠋⠀⢀⣾⠃\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠿⣶⣤⣤⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣀⣀⣤⡤⠞⠁\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠙⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀\n";
const char creepypasta[] = 
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣴⠶⠶⣶⠶⠶⠶⠶⠶⠶⠶⠶⠶⢶⠶⠶⠶⠤⠤⠤⠤⣄⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⣠⡾⠋⠀⠀⠊⠀⠀⠀⠀⠀⠀⠀⠀⠒⠒⠒⠀⠀⠀⠀⠤⢤⣤⣄⠉⠉⠛⠛⠷⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⣰⠟⠀⠀⠀⠀⠀⠐⠋⢑⣤⣶⣶⣤⡢⡀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣄⡂⠀⠀⠶⢄⠙⢷⣤⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⣸⡿⠚⠉⡀⠀⠀⠀⠀⢰⣿⣿⣿⣿⣿⣿⡄⠀⠀⠀⢢⠀⠀⡀⣰⣿⣿⣿⣿⣦⡀⠀⠀⠡⡀⢹⡆⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⢀⣴⠏⠀⣀⣀⣀⡤⢤⣄⣠⣿⣿⣿⣿⣻⣿⣿⣷⠀⢋⣾⠈⠙⣶⠒⢿⣿⣿⣿⣿⡿⠟⠃⠀⡀⠡⠼⣧⡀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⢀⣴⣿⢃⡴⢊⢽⣶⣤⣀⠀⠊⠉⠉⡛⢿⣿⣿⣿⠿⠋⢀⡀⠁⠀⠀⢸⣁⣀⣉⣉⣉⡉⠀⠩⡡⠀⣩⣦⠀⠈⠻⣦⡀⠀⠀⠀⠀\n\
⠀⢠⡟⢡⠇⡞⢀⠆⠀⢻⣿⣿⣷⣄⠀⢀⠈⠂⠈⢁⡤⠚⡟⠉⠀⣀⣀⠀⠈⠳⣍⠓⢆⢀⡠⢀⣨⣴⣿⣿⡏⢀⡆⠀⢸⡇⠀⠀⠀⠀\n\
⠀⣾⠁⢸⠀⠀⢸⠀⠀⠀⠹⣿⣿⣿⣿⣶⣬⣦⣤⡈⠀⠀⠇⠀⠛⠉⣩⣤⣤⣤⣿⣤⣤⣴⣾⣿⣿⣿⣿⣿⣧⠞⠀⠀⢸⡇⠀⠀⠀⠀\n\
⠀⢹⣆⠸⠀⠀⢸⠀⠀⠀⠀⠘⢿⣿⣿⣿⣿⣿⣿⣟⣛⠛⠛⣛⡛⠛⠛⣛⣋⡉⠉⣡⠶⢾⣿⣿⣿⣿⣿⣿⡇⠀⠀⢀⣾⠃⠀⠀⠀⠀\n\
⠀⠀⠻⣆⡀⠀⠈⢂⠀⠀⠀⠠⡈⢻⣿⣿⣿⣿⡟⠁⠈⢧⡼⠉⠙⣆⡞⠁⠈⢹⣴⠃⠀⢸⣿⣿⣿⣿⣿⣿⠃⠀⡆⣾⠃⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠈⢻⣇⠀⠀⠀⠀⠀⠀⢡⠀⠹⣿⣿⣿⣷⡀⠀⣸⡇⠀⠀⣿⠁⠀⠀⠘⣿⠀⠀⠘⣿⣿⣿⣿⣿⣿⠀⠀⣿⡇⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠹⣇⠀⠠⠀⠀⠀⠀⠡⠐⢬⡻⣿⣿⣿⣿⣿⣷⣶⣶⣿⣦⣤⣤⣤⣿⣦⣶⣿⣿⣿⣿⣿⣿⣿⠀⠀⣿⡇⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠹⣧⡀⠡⡀⠀⠀⠀⠑⠄⠙⢎⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⠀⢿⡇⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠈⠳⣤⡐⡄⠀⠀⠀⠈⠂⠀⠱⣌⠻⣿⣿⣿⣿⣿⣿⣿⠿⣿⠟⢻⡏⢻⣿⣿⣿⣿⣿⣿⣿⠀⢸⡇⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⢮⣦⡀⠂⠀⢀⠀⠀⠈⠳⣈⠻⣿⣿⣿⡇⠘⡄⢸⠀⠀⣇⠀⣻⣿⣿⣿⣿⣿⡏⠀⠸⡇⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⢶⣤⣄⡑⠄⠀⠀⠈⠑⠢⠙⠻⢷⣶⣵⣞⣑⣒⣋⣉⣁⣻⣿⠿⠟⠱⠃⡸⠀⣧⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠻⣷⣄⡀⠐⠢⣄⣀⡀⠀⠉⠉⠉⠉⠛⠙⠭⠭⠄⠒⠈⠀⠐⠁⢀⣿⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠷⢦⣤⣤⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣒⡠⠄⣠⡾⠃⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⠛⠷⠶⣦⣤⣭⣤⣬⣭⣭⣴⠶⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀\n";

const char front[] = 
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣤⣤⡴⠶⠶⠶⠶⠶⠶⠶⠶⢶⣦⣤⣤⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⡴⠶⠛⠋⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠙⠛⠷⠶⢦⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⣠⠞⠉⠀⠀⠀⢀⠀⠀⠒⠀⠀⠀⠀⠀⠒⠒⠐⠒⢒⡀⠈⠀⠀⠀⠀⡀⠒⠀⢀⠀⠀⠀⠈⠛⣦⡀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⢀⣾⠋⠀⠀⢀⠀⢊⠥⢐⠈⠁⠀⠀⠀⢀⠀⠀⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠈⢑⠠⢉⠂⢀⠀⠀⠈⢷⡄⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⣼⠃⠀⠀⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣀⠀⠈⠀⠁⠀⠀⠀⠀⠈⢷⡀⠀⠀⠀⠀\n\
⠀⠀⠀⣠⣾⠃⠀⠀⠀⠀⠀⠀⣠⠶⠛⣉⣩⣽⣟⠳⢶⣄⠀⠀⠀⠀⠀⠀⣠⡶⠛⣻⣿⣯⣉⣙⠳⣆⠀⠀⠀⠀⠀⠀⠈⣷⣄⠀⠀⠀\n\
⠀⣠⠞⠋⠀⢁⣤⣤⣤⣌⡁⠀⠛⠛⠉⣉⡍⠙⠛⠶⣤⠿⠀⢸⠀⠀⡇⠀⠻⠶⠞⠛⠉⠩⣍⡉⠉⠋⠀⣈⣤⡤⠤⢤⣄⠀⠈⠳⣄⠀\n\
⢰⡏⠀⠀⣴⠋⠀⢀⣆⠉⠛⠓⠒⠖⠚⠋⠀⠀⠀⠀⠀⠀⠀⡾⠀⠀⢻⠀⠀⠀⠀⠀⠀⠀⠈⠛⠒⠒⠛⠛⠉⣰⣆⠀⠈⢷⡀⠀⠘⡇\n\
⢸⡇⠀⠀⣧⢠⡴⣿⠉⠛⢶⣤⣀⡀⠀⠠⠤⠤⠄⣶⠒⠂⠀⠀⠀⠀⢀⣀⣘⠛⣷⠀⠀⠀⠀⠀⢀⣠⣴⠶⠛⠉⣿⠷⠤⣸⠃⠀⢀⡟\n\
⠈⢷⡀⠄⠘⠀⠀⠸⣷⣄⡀⠈⣿⠛⠻⠶⢤⣄⣀⡻⠆⠋⠉⠉⠀⠀⠉⠉⠉⠐⣛⣀⣤⡴⠶⠛⠋⣿⠀⣀⣠⣾⠇⠀⠀⠋⠠⢁⡾⠃\n\
⠀⠀⠙⢶⡀⠀⠀⠀⠘⢿⡙⠻⣿⣷⣤⣀⡀⠀⣿⠛⠛⠳⠶⠦⣴⠶⠶⠶⠛⠛⠋⢿⡀⣀⣠⣤⣾⣿⠟⢉⡿⠃⠀⠀⠀⢀⡾⠋⠀⠀\n\
⠀⠀⠀⠈⢻⡄⠀⠀⠀⠈⠻⣤⣼⠉⠙⠻⠿⣿⣿⣤⣤⣤⣀⣀⣿⡀⣀⣀⣠⣤⣶⣾⣿⠿⠛⠋⠁⢿⣴⠟⠁⠀⠀⠀⢠⡟⠁⠀⠀⠀\n\
⠀⠀⠀⠀⠀⢷⡄⠀⠀⠀⠀⠙⠿⣦⡀⠀⠀⣼⠃⠉⠉⠛⠛⠛⣿⡟⠛⠛⠛⠉⠉⠉⢿⡀⠀⣀⣴⠟⠋⠀⠀⠀⠀⢠⡾⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠙⢦⣀⠀⣀⠀⠀⡈⠛⠷⣾⣇⣀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠀⢀⣀⣼⡷⠾⠋⢁⠀⢀⡀⠀⣀⡴⠋⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠙⠳⣦⣉⠒⠬⣑⠂⢄⡉⠙⠛⠛⠶⠶⠶⠾⠷⠶⠚⠛⠛⠛⠉⣁⠤⢐⡨⠤⢒⣩⡴⠞⠋⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠶⣤⣉⠀⠂⠥⠀⠀⠤⠀⠀⠀⠀⠀⠤⠄⠀⠠⠌⠂⢈⣡⡴⠖⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠶⣤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡴⠞⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠳⠶⠶⠶⠶⠶⠖⠛⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";

const char trollge[] = 
"⣀⣠⣤⣤⣤⣤⢤⣤⣄⣀⣀⣀⣀⡀⡀⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄\n\
⠄⠉⠹⣾⣿⣛⣿⣿⣞⣿⣛⣺⣻⢾⣾⣿⣿⣿⣶⣶⣶⣄⡀⠄⠄⠄\n\
⠄⠄⠠⣿⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⣿⣿⣿⣿⣿⣿⣆⠄⠄\n\
⠄⠄⠘⠛⠛⠛⠛⠋⠿⣷⣿⣿⡿⣿⢿⠟⠟⠟⠻⠻⣿⣿⣿⣿⡀⠄\n\
⠄⢀⠄⠄⠄⠄⠄⠄⠄⠄⢛⣿⣁⠄⠄⠒⠂⠄⠄⣀⣰⣿⣿⣿⣿⡀\n\
⠄⠉⠛⠺⢶⣷⡶⠃⠄⠄⠨⣿⣿⡇⠄⡺⣾⣾⣾⣿⣿⣿⣿⣽⣿⣿\n\
⠄⠄⠄⠄⠄⠛⠁⠄⠄⠄⢀⣿⣿⣧⡀⠄⠹⣿⣿⣿⣿⣿⡿⣿⣻⣿\n\
⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠉⠛⠟⠇⢀⢰⣿⣿⣿⣏⠉⢿⣽⢿⡏\n\
⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠠⠤⣤⣴⣾⣿⣿⣾⣿⣿⣦⠄⢹⡿⠄\n\
⠄⠄⠄⠄⠄⠄⠄⠄⠒⣳⣶⣤⣤⣄⣀⣀⡈⣀⢁⢁⢁⣈⣄⢐⠃⠄\n\
⠄⠄⠄⠄⠄⠄⠄⠄⠄⣰⣿⣛⣻⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡯⠄⠄\n\
⠄⠄⠄⠄⠄⠄⠄⠄⠄⣬⣽⣿⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⠄⠄\n\
⠄⠄⠄⠄⠄⠄⠄⠄⠄⢘⣿⣿⣻⣛⣿⡿⣟⣻⣿⣿⣿⣿⡟⠄⠄⠄\n\
⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠛⢛⢿⣿⣿⣿⣿⣿⣿⣷⡿⠁⠄⠄⠄\n\
⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠉⠉⠉⠉⠈⠄⠄⠄⠄⠄⠄\n";