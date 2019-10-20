// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
      "\n __    __  ___  ___  ___  __ \n"
        "/ / /\ \ \/ __\/___\/   \/__\\n"
        "\ \/  \/ / /  //  // /\ /_\  \n"
        " \  /\  / /__/ \_// /_///__  \n"
        "  \/  \/\____|___/___,'\__/  \n"
        "                             \n"
        "                             \n";

const std::string nonWindowsAsciiArt = 
        "\n _    _ _____           _            ______          _           _    \n"
        "  | |  | /  __ \         | |           | ___ \        (_)         | |  \n"
        "  | |  | | /  \/ ___   __| | ___ ______| |_/ / __ ___  _  ___  ___| |_ \n"
        "  | |/\| | |    / _ \ / _` |/ _ \______|  __/ '__/ _ \| |/ _ \/ __| __|\n"
        "  \  /\  / \__/\ (_) | (_| |  __/      | |  | | | (_) | |  __/ (__| |_ \n"
        "   \/  \/ \____/\___/ \__,_|\___|      \_|  |_|  \___/| |\___|\___|\__|\n"
        "                                                     _/ |              \n"
        "                                                    |__/               \n";
		
/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
