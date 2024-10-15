{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "provenance": [],
      "authorship_tag": "ABX9TyO5ZVR0uHNupzxtxgGIGXZ2",
      "include_colab_link": true
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    },
    "language_info": {
      "name": "python"
    }
  },
  "cells": [
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "view-in-github",
        "colab_type": "text"
      },
      "source": [
        "<a href=\"https://colab.research.google.com/github/GraceAnnaAkparanta/GraceAnnaAkparanta/blob/main/C%2B%2BStuff.cpp\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "code",
      "execution_count": null,
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "t1rhuptLSm8O",
        "outputId": "e0c77bdc-1523-43c7-e394-e2fb3629f74c"
      },
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Writing helloworld.cpp\n"
          ]
        }
      ],
      "source": [
        "%%writefile helloworld.cpp\n",
        "\n",
        "#include <iostream>\n",
        "using namespace std;\n",
        "\n",
        "int main() {\n",
        "\n",
        "  cout << \"Hello World!\";\n",
        "\n",
        "  return 0;\n",
        "}"
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ helloworld.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "Q3yq3weISqTn",
        "outputId": "5cc1e79e-6e7f-44a5-d072-804e78b46550"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Hello World!"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile file1.cpp\n",
        "\n",
        "\n",
        "//allows us to use (the predefined object) cout to generate output and (the mainpulator) endl.\n",
        "#include <iostream>\n",
        "\n",
        "//allows you to use cout and endl w/o the prefix std::\n",
        "using namespace std;\n",
        "\n",
        "// C++ program = collection of functions.\n",
        "//function is a set of statements whose objective is to accomplish soemthing. All C++ programs require the function main.\n",
        "int main() {//begins the body of function main\n",
        "\n",
        "  double length;\n",
        "  double width;\n",
        "  double area;\n",
        "  double perimeter;\n",
        "\n",
        "// << is an operator, called the stream insertion operator\n",
        "  cout << \"Program to compute and output the perimeter and \" << \"area of a rectangle.\\n\" << endl; // anything in double quotes is a string, a string = evaulates to itself.\n",
        "\n",
        "  width = 4.0;\n",
        "  perimeter = 2 * (length + width);  // length + width is an arithmetic expression; evaluates to the rules of arithmetis operations.\n",
        "\n",
        "\n",
        "  cout << \"Enter number and press enter: \";\n",
        "  cin >> length;\n",
        "  cout << endl;\n",
        "  cout << \"Length = \" << length << endl; // identifer length evaluates to the value of length\n",
        "  cout << \"Width = \" << width << endl;\n",
        "  cout << \"Perimeter = \" << perimeter << endl;\n",
        "  area = length * width;\n",
        "  cout << \"Area = \" << area << endl;\n",
        "\n",
        "  return 0;\n",
        "}\n",
        "\n",
        "//all data must be loaded into main memory before it can be manipulated.\n",
        "//variable is a memory location whose contents can be changed."
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "Ax9BuPL9TYrb",
        "outputId": "ae0f62fd-f18f-4c4a-8928-b777509a61c7"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Writing file1.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ file1.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "rENfh7QVTTBy",
        "outputId": "633eae8b-c857-478e-f703-7e8ea198bbe4"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Program to compute and output the perimeter and area of a rectangle.\n",
            "\n",
            "Enter number and press enter: 25\n",
            "\n",
            "Length = 25\n",
            "Width = 4\n",
            "Perimeter = 8\n",
            "Area = 100\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile Prac1.cpp\n",
        "\n",
        "#include <iostream>\n",
        "#include <unordered_map>\n",
        "\n",
        "using namespace std;\n",
        "\n",
        "int main() {\n",
        "\n",
        "  /*Syntax to call unorder map:\n",
        "  unordered_map<key, value> hashMap;\n",
        "  */\n",
        "\n",
        "  //average time complexity for search, insertion and deletion of a std::unordered_map is o(1)\n",
        "\n",
        "  // Declaring hashMap to be of\n",
        "  // <string, int> type key\n",
        "  // will be of STRING type\n",
        "  // and mapped VALUE will\n",
        "  // be of int type\n",
        "  unordered_map<string, int> hashMap;\n",
        "\n",
        "  //Insert key-value pairs into the unordered_map:\n",
        "  hashMap[\"one\"] = 10;\n",
        "  hashMap[\"two\"] = 20;\n",
        "  hashMap[\"three\"] = 30;\n",
        "  hashMap[\"four\"] = 40;\n",
        "  hashMap[\"five\"] = 50;\n",
        "  hashMap[\"six\"] = 60;\n",
        "  hashMap[\"seven\"] = 70;\n",
        "  hashMap[\"eight\"] = 80;\n",
        "  hashMap[\"nine\"] = 90;\n",
        "  hashMap[\"ten\"] = 100;\n",
        "\n",
        "\n",
        "  //Declaring the iterator explicitly\n",
        "  unordered_map<string, int>::iterator itr;\n",
        "\n",
        "  // Intiailize the iterator to the first element of hashMap\n",
        "  itr = hashMap.begin();\n",
        "\n",
        "  while (itr != hashMap.end()) {\n",
        "    string Thekey = itr->first;\n",
        "    int Thevalue = itr->second;\n",
        "    ++itr;\n",
        "\n",
        "    cout << \"Key: \" << Thekey << \", Value: \" << Thevalue << endl;\n",
        "  }\n",
        "\n",
        "  return 0;\n",
        "}"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "IRNHWiI_TGoR",
        "outputId": "03bc06d1-b9f5-449f-9a90-51ff140f46bb"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Overwriting Prac1.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ Prac1.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "outputId": "559ed596-90a6-4842-ac45-a5033b12fa5c",
        "id": "_aDiP9Wherl1"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Key: ten, Value: 100\n",
            "Key: eight, Value: 80\n",
            "Key: seven, Value: 70\n",
            "Key: six, Value: 60\n",
            "Key: five, Value: 50\n",
            "Key: nine, Value: 90\n",
            "Key: four, Value: 40\n",
            "Key: three, Value: 30\n",
            "Key: two, Value: 20\n",
            "Key: one, Value: 10\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile Prac2.cpp\n",
        "\n",
        "#include <iostream>\n",
        "\n",
        "using namespace std;\n",
        "\n",
        "int main() {\n",
        "  int a = 1;\n",
        "  int b = 2;\n",
        "  int c = a; // c = 1\n",
        "\n",
        "  a = b; // a stores 2\n",
        "  b = c; // b stores 1\n",
        "\n",
        "  cout << b;\n",
        "\n",
        "  return 0;\n",
        "}"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "T_pFM5jh0_oS",
        "outputId": "95d8d725-6d4c-414c-9912-71fb147bd473"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Overwriting Prac2.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ Prac2.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "lU_AQuZn1mhV",
        "outputId": "1f94da60-32d4-479f-99b1-e5968209116b"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "1"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile Prac3.cpp\n",
        "\n",
        "#include <iostream>\n",
        "\n",
        "using namespace std;\n",
        "\n",
        "int main() {\n",
        "  int x = 10;\n",
        "  // int y = x++; // x = 11, y = 10 postfix\n",
        "  int z = ++x; // x = 11, z = 11 prefix\n",
        "\n",
        "  cout << z << \" \" << x;\n",
        "\n",
        "  return 0;\n",
        "}"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "T-4e-zOm20Ud",
        "outputId": "33e08b54-3f82-4799-868b-94e9a54478de"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Writing Prac3.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ Prac3.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "vWNxpdw0FAwP",
        "outputId": "c385d8f3-5a66-4123-fb37-03f2edfab13c"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "12 12"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile Prac4.cpp\n",
        "\n",
        "#include <iostream>\n",
        "\n",
        "using namespace std;\n",
        "\n",
        "int main() {\n",
        "\n",
        "  int x = 10;\n",
        "  double y = 5;\n",
        "\n",
        "  double z = (x + 10) / (3 * y);\n",
        "\n",
        "  cout << z;\n",
        "\n",
        "  return 0;\n",
        "}"
      ],
      "metadata": {
        "id": "Sb9NokhtFFYF",
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "outputId": "0fe77f33-b331-455d-c192-50ca8f5f761d"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Overwriting Prac4.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ Prac4.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "HfHtkKOTB4m7",
        "outputId": "ceaa51f3-3430-4415-abbc-08af727eb545"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "1.33333"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile Prac5.cpp\n",
        "\n",
        "#include <iostream>\n",
        "#include <string>\n",
        "\n",
        "using namespace std;\n",
        "\n",
        "  const double STATETAX = 0.04;\n",
        "  const double COUTYTAX = 0.02;\n",
        "\n",
        "int main() {\n",
        "\n",
        "  string username;\n",
        "\n",
        "  cout << \"Enter you name: \" << username;\n",
        "  cin >> username;\n",
        "\n",
        "  int sales;\n",
        "  cout << \"Enter slaes incomce:\" << sales;\n",
        "  cin >> sales;\n",
        "\n",
        "  double Staxes = (sales * STATETAX);\n",
        "  double CTtaxes = (sales * COUTYTAX);\n",
        "  double total = Staxes + CTtaxes;\n",
        "\n",
        "  cout << username << \", your total sales is: $\" << sales << endl;\n",
        "  cout << \"Your state tax is: $\" << Staxes << \". and your County tax is: $\" << CTtaxes << endl;\n",
        "  cout << \"The total tax that you have to pay on your income is: $\" << total << endl;\n",
        "\n",
        "  return 0;\n",
        "}"
      ],
      "metadata": {
        "id": "b3684tDNC0sd",
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "outputId": "502634eb-189c-497b-8039-99884b305741"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Writing Prac5.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ Prac5.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "PiiBZEKQJ5rf",
        "outputId": "67bab303-f593-47c0-d7b5-6d7ed1fbbe1e"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Enter you name: Grace\n",
            "Enter slaes incomce:0500\n",
            "Grace, your total sales is: $500\n",
            "Your state tax is: $20. and your County tax is: $10\n",
            "The total tax that you have to pay on your income is: $30\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile Prac6.cpp\n",
        "\n",
        "#include <iostream>\n",
        "\n",
        "using namespace std;\n",
        "\n",
        "int main() {\n",
        "\n",
        "  int x;\n",
        "\n",
        "  cout << \"Enter a number: \" << endl;\n",
        "  cin >> x;\n",
        "\n",
        "  int y = x % 10;\n",
        "  cout << \"Is the last digit \" << y << \"?\" << endl;\n",
        "\n",
        "   int z = x / 10;\n",
        "  cout << \"Is the last digit \" << z << \"?\" << endl;\n",
        "\n",
        "  return 0;\n",
        "}"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "xEcaunOiRIEd",
        "outputId": "4a6868ab-2519-418a-cf1f-95bb7bf15c56"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Overwriting Prac6.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ Prac6.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "wygoYb9K6JUi",
        "outputId": "6dfafc1f-eaba-40cd-aeef-0b66a550ec9e"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Enter a number: \n",
            "20\n",
            "Is the last digit 0?\n",
            "Is the last digit 2?\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile Prac7.cpp\n",
        "\n",
        "#include <iostream>\n",
        "#include <cmath>\n",
        "\n",
        "using namespace std;\n",
        "\n",
        "int main() {\n",
        "\n",
        "  int fahrenheit;\n",
        "  double celsius;\n",
        "\n",
        "  cout << \"Enter temperature in Fahrenheit: \";\n",
        "  cin >> fahrenheit;\n",
        "\n",
        "  celsius = (fahrenheit - 32) * (5.0/9.0);\n",
        "\n",
        "  cout << fahrenheit << \"  fahrenheit is \" << celsius << \" degress celsius. (Not rounded)\" << endl;\n",
        "  cout << fahrenheit << \"  fahrenheit is \" << round(celsius) << \" degress celsius.\"; //had to include cmath library to use cmath\n",
        "\n",
        "  return 0;\n",
        "}"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "3c7mTqfBsOQ-",
        "outputId": "2f10c97d-c894-4e1e-8398-df244d4b21cc"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Overwriting Prac7.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ Prac7.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "KsbFEzhcsPs8",
        "outputId": "b80721ab-2cf6-44ae-a21f-0a708bc538aa"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Enter temperature in Fahrenheit: 76\n",
            "76  fahrenheit is 24.4444 degress celsius. (Not rounded)\n",
            "76  fahrenheit is 24 degress celsius."
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile Prac8.cpp\n",
        "\n",
        "#include <iostream>\n",
        "#include <cmath>\n",
        "\n",
        "using namespace std;\n",
        "\n",
        "int main() {\n",
        "\n",
        "  double result = floor(1.2); //calling a floor function\n",
        "  cout << result << endl;\n",
        "\n",
        "  double resultex = pow(2, 3);\n",
        "  cout << resultex;\n",
        "\n",
        "  return 0;\n",
        "}"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "38wGTIwhsVJS",
        "outputId": "8e6dcc96-92ed-46df-c28b-31b9d60d29a5"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Overwriting Prac8.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ Prac8.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "xtlXfcLqwD3Y",
        "outputId": "6faa48cb-c3f0-4479-96f1-10839b13ace0"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "1\n",
            "8"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile Prac9.cpp\n",
        "\n",
        "#include <iostream>\n",
        "#include <cmath>\n",
        "\n",
        "using namespace std;\n",
        "\n",
        "int main() {\n",
        "\n",
        "  cout << \"Enter the radius of a circle: \";\n",
        "  double radius;\n",
        "  cin >> radius;\n",
        "\n",
        "  double area = M_PI * pow(radius, 2); //The cmath library provides the constant M_PI which represents the value of Pi.\n",
        "  cout << \"The circle has a radius of \" << radius << \" and its area is \" << area << \".\" << endl;\n",
        "\n",
        "  return 0;\n",
        "}"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "edlggVdmwmq4",
        "outputId": "f7592724-8b71-4341-e33b-7c85ae54b9ee"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Overwriting Prac9.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ Prac9.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "GBxVNmMbwuUN",
        "outputId": "781df2ee-a849-4370-dec3-3381702db95d"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Enter the radius of a circle: 4\n",
            "The circle has a radius of 4 and its area is 50.2655.\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile PracX.cpp\n",
        "\n",
        "#include <iostream>\n",
        "#include <cmath>\n",
        "\n",
        "using namespace std;\n",
        "\n",
        "int main() {\n",
        "\n",
        "\n",
        "  int number = 0b11111111;\n",
        "  int num = 0xff;\n",
        "  number--;\n",
        "  cout << number << endl;\n",
        "  cout << num;\n",
        "\n",
        "  // empty brace Intiailizer\n",
        "  // int number {};\n",
        "  // cout << number;\n",
        "\n",
        "\n",
        "//  auto price = 99.99;\n",
        "//  float interestRate = 3.67F; //when working with float type you have to specify with F or f. Try stroing double in float = data lost\n",
        "//  long fileSize = 90000L;\n",
        "//  char letter = 'a';\n",
        "//  bool isVaild = false;\n",
        "\n",
        "\n",
        "  return 0;\n",
        "}"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "-JXqhLNvx-Yd",
        "outputId": "97848efe-dba9-4924-dbc9-0f4f2a677495"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Overwriting PracX.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ PracX.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "q4O9dQ4KDHp7",
        "outputId": "55c6d234-83e2-4f51-a0ac-a09fbac5a8fb"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "254\n",
            "255"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile PracXI.cpp\n",
        "\n",
        "#include <iostream>\n",
        "\n",
        "using namespace std;\n",
        "\n",
        "int main() {\n",
        "\n",
        "  // we cannot store big values in small data types (short 2 bytes >> int 4 bytes)\n",
        "  short number = 100;\n",
        "  int another{number};\n",
        "  cout << another;\n",
        "\n",
        "  return 0;\n",
        "}"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "ms66NbsjEvC0",
        "outputId": "bb4be986-0132-4d0d-8b7f-c752b2d9f6c4"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Overwriting PracXI.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ PracXI.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "tCpmGqXWEz0q",
        "outputId": "176cecca-5281-4d4d-81b7-85d289d2e3fd"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "100"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile PracXII.cpp\n",
        "\n",
        "#include <iostream>\n",
        "#include <cstdlib>\n",
        "#include <ctime>\n",
        "\n",
        "using namespace std;\n",
        "\n",
        "int main() {\n",
        "\n",
        "\n",
        "\n",
        "  // long elapsedSeconds; // Jan 1 1970\n",
        "  // passign a an argument\n",
        "  srand(time(0));\n",
        "  int number = rand() % 10;\n",
        "  cout << number;\n",
        "\n",
        "  return 0;\n",
        "}"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "2eTDsGJIHDtW",
        "outputId": "3902400c-44e9-46a3-cb4d-308928938185"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Overwriting PracXII.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ PracXII.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "oPqMkBMkHUBT",
        "outputId": "69d65683-1a2e-4608-bf40-9ab458341bcb"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "4"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile PracXIII.cpp\n",
        "\n",
        "#include <iostream>\n",
        "#include <cstdlib>\n",
        "#include <ctime>\n",
        "\n",
        "using namespace std;\n",
        "\n",
        "int main() {\n",
        "\n",
        "// method 1:\n",
        "  // const short minValue = 1;\n",
        "  // const short maxValue = 6;\n",
        "\n",
        "\n",
        "  // srand(time(0));\n",
        "  // // int dice = [rand() % (maxValue - minValue + 1)] + minValue;\n",
        "  // short die1 = (rand() % (maxValue - minValue + 1)) + minValue;\n",
        "  // short die2 = (rand() % (maxValue - minValue + 1)) + minValue;\n",
        "  // cout << die1 << \", \" << die2 ;\n",
        "\n",
        "\n",
        "// method 2:\n",
        "  srand(time(0));\n",
        "\tint Die1 = rand() % 6;    // To limit the output to 0-5\n",
        "\tint Die2 = rand() % 6;    //To limit the output to 0-5\n",
        "\n",
        "\tcout << \"Die 1 Value: \" << Die1++ << endl  //The \"++\" allows the output to be 1-6\n",
        "\t\t << \"Die 2 Value: \" << Die2++ << endl;  //The \"++\" allows the output to be 1-6\n",
        "\n",
        "  return 0;\n",
        "}"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "BbBMHDEobiOY",
        "outputId": "3aa3ab8f-1716-402e-982e-3c8427f79dc8"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Overwriting PracXIII.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ PracXIII.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "WEgfZwXhbykc",
        "outputId": "7f358e29-9759-49a7-fa70-e46fb060a420"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Die 1 Value: 1\n",
            "Die 2 Value: 4\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile PracXIV.cpp\n",
        "\n",
        "\n",
        "// I treid calculating the kg and cm but something did not work???\n",
        "\n",
        "#include <iostream>\n",
        "#include <string>\n",
        "#include <cmath>\n",
        "\n",
        "using namespace std;\n",
        "\n",
        "const double CM =  2.54;\n",
        "\n",
        "int main() {\n",
        "\n",
        "  string name;\n",
        "  int age;\n",
        "  int weight;\n",
        "  int height;\n",
        "\n",
        "  cout << \"Enter your name: \";\n",
        "  cin >> name;\n",
        "\n",
        "  cout << \"Hi \" << name << \", please enter your weight (lbs) and height in inches\";\n",
        "  cin >> weight >> height;\n",
        "\n",
        "  // double pounds_kg = weight * KG;\n",
        "  // cout << pounds_kg << endl;\n",
        "\n",
        "  // double inches_cm = height * CM;\n",
        "  // cout << inches_cm << endl;\n",
        "\n",
        "  // double meters = inches_cm / 100;\n",
        "  // cout << meters << endl;\n",
        "\n",
        "  // double meters_square = pow(meters, 2);\n",
        "\n",
        "  double height_square = height * height;\n",
        "\n",
        "  double BMI = 703 * (weight / height_square);\n",
        "\n",
        "  cout << \"Your BMI is \" << BMI << endl;\n",
        "\n",
        "  return 0;\n",
        "}"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "Mj-iYQpS5ZEE",
        "outputId": "34a9e037-ff2a-4257-c97e-1f4ba6206d73"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Overwriting PracXIV.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ PracXIV.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "fCDijjsW5hgK",
        "outputId": "3399dd35-b19e-4b9f-af07-a28d0ff47c1f"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Enter your name: Grace\n",
            "Hi Grace, please enter your weight (lbs) and height in inches120 62\n",
            "Your BMI is 21.9459\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile PracXV.cpp\n",
        "// C++ Booleans\n",
        "\n",
        "#include <iostream>\n",
        "\n",
        "using namespace std;\n",
        "\n",
        "int main() {\n",
        "\n",
        "// bool is a data type to indicate yes/no, true/false, 1/0\n",
        "\n",
        "  // bool isCodingFun = false;\n",
        "  // bool isEatingGood = true;\n",
        "\n",
        "  // cout << isCodingFun << endl;\n",
        "  // cout << isEatingGood;\n",
        "\n",
        "// A boolean expression returns a boolean value, which is either 1 (true) or 0 (false)\n",
        "  // int x = 72;\n",
        "  // int y;\n",
        "\n",
        "  // cout << \"Enter a ineger: \";\n",
        "  // cin >> y;\n",
        "\n",
        "  // cout << (x > y) << endl;\n",
        "\n",
        "  // cout << (10 > 2) << endl;\n",
        "\n",
        "  // cout << (x == 72) << endl;\n",
        "\n",
        "  // cout << (10 == 15);\n",
        "\n",
        "  int myAge;\n",
        "\n",
        "  cout << \"Enter your age:\";\n",
        "  cin >> myAge;\n",
        "\n",
        "  int votingAge = 18;\n",
        "\n",
        "  if (myAge >= votingAge) {\n",
        "    cout << \"You are old enough to vote!\";\n",
        "  }\n",
        "  else {\n",
        "    cout << \"Sorry... wait a little longer to vote yougin~\";\n",
        "  }\n",
        "\n",
        "  return 0;\n",
        "}"
      ],
      "metadata": {
        "id": "oVm7PWVVAnOs",
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "outputId": "2f641605-baf5-4a10-b0f8-0e8cd2463617"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Overwriting PracXV.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ PracXV.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "y7exTCwr6L6t",
        "outputId": "c43ea149-47bf-462f-e878-12ebf2b0f16d"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Enter your age:14\n",
            "Sorry... wait a little longer to vote yougin~"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile PracXVI.cpp\n",
        "// C++ If.. Else\n",
        "\n",
        "#include <iostream>\n",
        "\n",
        "using namespace std;\n",
        "\n",
        "int main() {\n",
        "\n",
        "/*Sytax\n",
        "//   if (condition) {\n",
        "//   // block of code to be executed if the condition is true\n",
        "// }\n",
        "\n",
        "//   if (condition) {\n",
        "//   // block of code to be executed if the condition is true\n",
        "// } else {\n",
        "//   // block of code to be executed if the condition is false\n",
        "// }\n",
        "\n",
        "// if (condition1) {\n",
        "//   // block of code to be executed if condition1 is true\n",
        "// } else if (condition2) {\n",
        "//   // block of code to be executed if the condition1 is false and condition2 is true\n",
        "// } else {\n",
        "//   // block of code to be executed if the condition1 is false and condition2 is false\n",
        "} */\n",
        "\n",
        "  int myHeight;\n",
        "  cout << \"Enter your height in inches: \";\n",
        "  cin >> myHeight;\n",
        "\n",
        "  int roll_heigth = 52;\n",
        "\n",
        "  if ( myHeight > roll_heigth ) {\n",
        "    cout << \"You are tall enough to ride the rollercoster!\";\n",
        "  }\n",
        "  else if ( myHeight == roll_heigth ) {\n",
        "    cout << \"Lucky you. You are the exact height to ride the roller coster!\";\n",
        "  }\n",
        "  else {\n",
        "    cout << \"you are not tall enough to ride the rollercoster, take a walk!\";\n",
        "  }\n",
        "\n",
        "  return 0;\n",
        "}"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "Oa_PkJgQ_dRj",
        "outputId": "a5e2d8f1-41cb-42ad-c080-0aeac810630f"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Overwriting PracXVI.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ PracXVI.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "Nu6b9RqZAjsV",
        "outputId": "b71dac8c-9d38-4314-90a3-12e50f9279a4"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Enter your height in inches: 79\n",
            "You are tall enough to ride the rollercoster!"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile PracXVII.cpp\n",
        "//countiuation\n",
        "\n",
        "#include <iostream>\n",
        "#include <string>\n",
        "\n",
        "using namespace std;\n",
        "\n",
        "int main() {\n",
        "\n",
        "  // variable = (condition) ? expressionTrue : expressionFalse;\n",
        "\n",
        "  int time = 20;\n",
        "if (time < 18) {\n",
        "  cout << \"Good day.\";\n",
        "} else {\n",
        "  cout << \"Good evening.\" << endl;\n",
        "}\n",
        "\n",
        "string result = (time < 18) ? \"Good day.\" : \"Good evening.\";\n",
        "\n",
        "cout << result;\n",
        "\n",
        "  return 0;\n",
        "}"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "D9oxTV3zAsmq",
        "outputId": "facd0dc2-75a6-4e46-92cc-bff76b7b9bbf"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Overwriting PracXVII.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ PracXVII.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "fL4GLysMHAC_",
        "outputId": "95ed1b6e-3189-4ee1-a297-7c72d6a7bfad"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Good evening.\n",
            "Good evening."
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile PracXVIII.cpp\n",
        "// Switch\n",
        "\n",
        "#include <iostream>\n",
        "\n",
        "using namespace std;\n",
        "\n",
        "int main() {\n",
        "\n",
        "/*   switch(expression) {\n",
        "//   case x:\n",
        "//     // code block\n",
        "//     break;\n",
        "//   case y:\n",
        "//     // code block\n",
        "//     break;\n",
        "//   default:\n",
        "//     // code block\n",
        " } */\n",
        "\n",
        "int day;\n",
        "cout << \"Enter a number for the days in a week:\";\n",
        "cin >> day;\n",
        "\n",
        "switch (day) {\n",
        "  case 1:\n",
        "    cout << \"Monday\";\n",
        "    break;\n",
        "  case 2:\n",
        "    cout << \"Tuesday\";\n",
        "    break;\n",
        "  case 3:\n",
        "    cout << \"Wednesday\";\n",
        "    break;\n",
        "  case 4:\n",
        "    cout << \"Thursday\";\n",
        "    break;\n",
        "  case 5:\n",
        "    cout << \"Friday\";\n",
        "    break;\n",
        "  case 6:\n",
        "    cout << \"Saturday\";\n",
        "    break;\n",
        "  case 7:\n",
        "    cout << \"Sunday\";\n",
        "    break;\n",
        "  default:\n",
        "    cout << \"umm are you okay?\";\n",
        "}\n",
        "\n",
        "/* The switch expression is evaluated once\n",
        "The value of the expression is compared with the values of each case\n",
        "If there is a match, the associated block of code is executed\n",
        "The break and default keywords are optional, and will be described later in this chapter\n",
        "*/\n",
        "\n",
        "// The default keyword specifies some code to run if there is no case match.\n",
        "\n",
        "\n",
        "  return 0;\n",
        "}"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "Slw4dFFsHbZF",
        "outputId": "a1cd379e-ee26-4b5f-c312-af0f816d9295"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Overwriting PracXVIII.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ PracXVIII.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "n_AdmMioJCtA",
        "outputId": "fa6efac7-4c00-4508-f8ab-7dad3858ab9c"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Enter a number for the days in a week:3\n",
            "Wednesday"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile PracIX.cpp\n",
        "// Loops\n",
        "\n",
        "#include <iostream>\n",
        "\n",
        "using namespace std;\n",
        "\n",
        "int main() {\n",
        "\n",
        "/* Sytax:\n",
        " while (condition) {\n",
        "  // code block to be executed\n",
        "}\n",
        "*/\n",
        "\n",
        "/*\n",
        "  int i = -10;\n",
        "  while (i < 5) {\n",
        "    cout << i << \"\\n\";\n",
        "    i++;\n",
        "}\n",
        "*/\n",
        "\n",
        "// Do not forget to increase the variable used in the condition, otherwise the loop will never end!\n",
        "\n",
        "/* The do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.\n",
        "\n",
        "Sytax:\n",
        "do {\n",
        "  // code block to be executed\n",
        "}\n",
        "while (condition);\n",
        "*/\n",
        "\n",
        "/*  int j = 0;\n",
        "  do {\n",
        "    cout << j << \"\\n\";\n",
        "    j++;\n",
        "  }\n",
        "  while (j < 5);\n",
        "*/\n",
        "\n",
        "/*\n",
        "  int k = 0;\n",
        "\n",
        "  while (k <= 10) {\n",
        "    cout << k << \"\\n\";\n",
        "    k += 2;\n",
        "}\n",
        "\n",
        "*/\n",
        "\n",
        "// A variable with some specific numbers\n",
        "  int numbers = 12345;\n",
        "\n",
        "// A variable to store the reversed number\n",
        "  int revNumbers = 0;\n",
        "\n",
        "// Reverse and reorder the numbers\n",
        "  while (numbers) {\n",
        "\n",
        "  // Get the last number of 'numbers' and add it to 'revNumbers'\n",
        "    revNumbers = revNumbers * 10 + numbers % 10;\n",
        "    // (0*10) + (12345%10) = (0) + 5 ~ revNumbers gets 5\n",
        "    // (5*10) + (1234%10) = (50) + 4 ~ revNumbers gets 54\n",
        "    // (54*10) + (123%10) = (540) + 3 ~ revNumbers gets 543\n",
        "    // (543*10) + (12%10) = (5430) + 2 ~ revNumbers gets 5432\n",
        "    // (5432*10) + (1%10) = (54320) + 1 ~ revNumbers gets 54321\n",
        "\n",
        "  // Remove the last number of 'numbers'\n",
        "    numbers /= 10;\n",
        "    // which is 5 now repeat ~ numbers gets 1234\n",
        "    // 1234 / 10 = 123 ~ numbers gets 123\n",
        "    // 123 / 10 = 12 ~ numbers gets 12\n",
        "    // 12 / 10 = 1 ~ numbers gets 1\n",
        "    // 1/10 = 0 ~ numbers gets 0\n",
        "}\n",
        "\n",
        "cout << \"Reversed numbers: \" << revNumbers << \"\\n\";\n",
        "\n",
        "  return 0;\n",
        "\n",
        "}"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "pHWVANKkKXfk",
        "outputId": "967b6de7-50e2-4cd3-ee91-a2bf2ca59d6f"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Overwriting PracIX.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ PracIX.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "mVGdqshLLt2d",
        "outputId": "16c46de1-b460-4ab5-fc6d-6ef43cdf7a47"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Reversed numbers: 54321\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile PracXX.cpp\n",
        "\n",
        "// 99 carten of milk on the wall\n",
        "\n",
        "#include <iostream>\n",
        "\n",
        "using namespace std;\n",
        "\n",
        "int main () {\n",
        "  int num = 99;\n",
        "\n",
        "  // Loop while there are any cartons left (num != 0)\n",
        "  while (num) { // Remember this is a while loop and will contiune until it hits 0\n",
        "    // When there are more than 1 carton, use \"cartons\" (plural)\n",
        "    if (num > 1) {\n",
        "      cout << num << \" cartons of milk on the wall, \" << num << \" cartons of milk.\\n\";\n",
        "      cout << \"You take one down pass it around. \";\n",
        "      num = --num; // if this was not added while loop would go FOREVER\n",
        "      cout << num << \" cartons of milk on the wall.\\n\";\n",
        "      }\n",
        "      else {\n",
        "        // When there is exactly 1 carton left, handle the singular case\n",
        "        // This handles the case when num is exactly 1\n",
        "        cout << num << \" carton of milk on the wall, \" << num << \" carton of milk.\\n\";\n",
        "        cout << \"You take one down pass it around.\\n\\n\";\n",
        "        num = --num;\n",
        "        // After taking the last carton down, print \"no more\" for 0\n",
        "        cout << \"There are no more cartons of milk on the wall.\";\n",
        "        }\n",
        "    }\n",
        "  return 0;\n",
        "}"
      ],
      "metadata": {
        "id": "4_wKvLFXMHHK",
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "outputId": "2e6340cc-4997-4d37-e7cc-97f1bad4d69d"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Overwriting PracXX.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ PracXX.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "3kIqbWZtJ7ig",
        "outputId": "54833444-d6f1-4b7e-eb3c-3db89fc89ea2"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "99 cartons of milk on the wall, 99 cartons of milk.\n",
            "You take one down pass it around. 98 cartons of milk on the wall.\n",
            "98 cartons of milk on the wall, 98 cartons of milk.\n",
            "You take one down pass it around. 97 cartons of milk on the wall.\n",
            "97 cartons of milk on the wall, 97 cartons of milk.\n",
            "You take one down pass it around. 96 cartons of milk on the wall.\n",
            "96 cartons of milk on the wall, 96 cartons of milk.\n",
            "You take one down pass it around. 95 cartons of milk on the wall.\n",
            "95 cartons of milk on the wall, 95 cartons of milk.\n",
            "You take one down pass it around. 94 cartons of milk on the wall.\n",
            "94 cartons of milk on the wall, 94 cartons of milk.\n",
            "You take one down pass it around. 93 cartons of milk on the wall.\n",
            "93 cartons of milk on the wall, 93 cartons of milk.\n",
            "You take one down pass it around. 92 cartons of milk on the wall.\n",
            "92 cartons of milk on the wall, 92 cartons of milk.\n",
            "You take one down pass it around. 91 cartons of milk on the wall.\n",
            "91 cartons of milk on the wall, 91 cartons of milk.\n",
            "You take one down pass it around. 90 cartons of milk on the wall.\n",
            "90 cartons of milk on the wall, 90 cartons of milk.\n",
            "You take one down pass it around. 89 cartons of milk on the wall.\n",
            "89 cartons of milk on the wall, 89 cartons of milk.\n",
            "You take one down pass it around. 88 cartons of milk on the wall.\n",
            "88 cartons of milk on the wall, 88 cartons of milk.\n",
            "You take one down pass it around. 87 cartons of milk on the wall.\n",
            "87 cartons of milk on the wall, 87 cartons of milk.\n",
            "You take one down pass it around. 86 cartons of milk on the wall.\n",
            "86 cartons of milk on the wall, 86 cartons of milk.\n",
            "You take one down pass it around. 85 cartons of milk on the wall.\n",
            "85 cartons of milk on the wall, 85 cartons of milk.\n",
            "You take one down pass it around. 84 cartons of milk on the wall.\n",
            "84 cartons of milk on the wall, 84 cartons of milk.\n",
            "You take one down pass it around. 83 cartons of milk on the wall.\n",
            "83 cartons of milk on the wall, 83 cartons of milk.\n",
            "You take one down pass it around. 82 cartons of milk on the wall.\n",
            "82 cartons of milk on the wall, 82 cartons of milk.\n",
            "You take one down pass it around. 81 cartons of milk on the wall.\n",
            "81 cartons of milk on the wall, 81 cartons of milk.\n",
            "You take one down pass it around. 80 cartons of milk on the wall.\n",
            "80 cartons of milk on the wall, 80 cartons of milk.\n",
            "You take one down pass it around. 79 cartons of milk on the wall.\n",
            "79 cartons of milk on the wall, 79 cartons of milk.\n",
            "You take one down pass it around. 78 cartons of milk on the wall.\n",
            "78 cartons of milk on the wall, 78 cartons of milk.\n",
            "You take one down pass it around. 77 cartons of milk on the wall.\n",
            "77 cartons of milk on the wall, 77 cartons of milk.\n",
            "You take one down pass it around. 76 cartons of milk on the wall.\n",
            "76 cartons of milk on the wall, 76 cartons of milk.\n",
            "You take one down pass it around. 75 cartons of milk on the wall.\n",
            "75 cartons of milk on the wall, 75 cartons of milk.\n",
            "You take one down pass it around. 74 cartons of milk on the wall.\n",
            "74 cartons of milk on the wall, 74 cartons of milk.\n",
            "You take one down pass it around. 73 cartons of milk on the wall.\n",
            "73 cartons of milk on the wall, 73 cartons of milk.\n",
            "You take one down pass it around. 72 cartons of milk on the wall.\n",
            "72 cartons of milk on the wall, 72 cartons of milk.\n",
            "You take one down pass it around. 71 cartons of milk on the wall.\n",
            "71 cartons of milk on the wall, 71 cartons of milk.\n",
            "You take one down pass it around. 70 cartons of milk on the wall.\n",
            "70 cartons of milk on the wall, 70 cartons of milk.\n",
            "You take one down pass it around. 69 cartons of milk on the wall.\n",
            "69 cartons of milk on the wall, 69 cartons of milk.\n",
            "You take one down pass it around. 68 cartons of milk on the wall.\n",
            "68 cartons of milk on the wall, 68 cartons of milk.\n",
            "You take one down pass it around. 67 cartons of milk on the wall.\n",
            "67 cartons of milk on the wall, 67 cartons of milk.\n",
            "You take one down pass it around. 66 cartons of milk on the wall.\n",
            "66 cartons of milk on the wall, 66 cartons of milk.\n",
            "You take one down pass it around. 65 cartons of milk on the wall.\n",
            "65 cartons of milk on the wall, 65 cartons of milk.\n",
            "You take one down pass it around. 64 cartons of milk on the wall.\n",
            "64 cartons of milk on the wall, 64 cartons of milk.\n",
            "You take one down pass it around. 63 cartons of milk on the wall.\n",
            "63 cartons of milk on the wall, 63 cartons of milk.\n",
            "You take one down pass it around. 62 cartons of milk on the wall.\n",
            "62 cartons of milk on the wall, 62 cartons of milk.\n",
            "You take one down pass it around. 61 cartons of milk on the wall.\n",
            "61 cartons of milk on the wall, 61 cartons of milk.\n",
            "You take one down pass it around. 60 cartons of milk on the wall.\n",
            "60 cartons of milk on the wall, 60 cartons of milk.\n",
            "You take one down pass it around. 59 cartons of milk on the wall.\n",
            "59 cartons of milk on the wall, 59 cartons of milk.\n",
            "You take one down pass it around. 58 cartons of milk on the wall.\n",
            "58 cartons of milk on the wall, 58 cartons of milk.\n",
            "You take one down pass it around. 57 cartons of milk on the wall.\n",
            "57 cartons of milk on the wall, 57 cartons of milk.\n",
            "You take one down pass it around. 56 cartons of milk on the wall.\n",
            "56 cartons of milk on the wall, 56 cartons of milk.\n",
            "You take one down pass it around. 55 cartons of milk on the wall.\n",
            "55 cartons of milk on the wall, 55 cartons of milk.\n",
            "You take one down pass it around. 54 cartons of milk on the wall.\n",
            "54 cartons of milk on the wall, 54 cartons of milk.\n",
            "You take one down pass it around. 53 cartons of milk on the wall.\n",
            "53 cartons of milk on the wall, 53 cartons of milk.\n",
            "You take one down pass it around. 52 cartons of milk on the wall.\n",
            "52 cartons of milk on the wall, 52 cartons of milk.\n",
            "You take one down pass it around. 51 cartons of milk on the wall.\n",
            "51 cartons of milk on the wall, 51 cartons of milk.\n",
            "You take one down pass it around. 50 cartons of milk on the wall.\n",
            "50 cartons of milk on the wall, 50 cartons of milk.\n",
            "You take one down pass it around. 49 cartons of milk on the wall.\n",
            "49 cartons of milk on the wall, 49 cartons of milk.\n",
            "You take one down pass it around. 48 cartons of milk on the wall.\n",
            "48 cartons of milk on the wall, 48 cartons of milk.\n",
            "You take one down pass it around. 47 cartons of milk on the wall.\n",
            "47 cartons of milk on the wall, 47 cartons of milk.\n",
            "You take one down pass it around. 46 cartons of milk on the wall.\n",
            "46 cartons of milk on the wall, 46 cartons of milk.\n",
            "You take one down pass it around. 45 cartons of milk on the wall.\n",
            "45 cartons of milk on the wall, 45 cartons of milk.\n",
            "You take one down pass it around. 44 cartons of milk on the wall.\n",
            "44 cartons of milk on the wall, 44 cartons of milk.\n",
            "You take one down pass it around. 43 cartons of milk on the wall.\n",
            "43 cartons of milk on the wall, 43 cartons of milk.\n",
            "You take one down pass it around. 42 cartons of milk on the wall.\n",
            "42 cartons of milk on the wall, 42 cartons of milk.\n",
            "You take one down pass it around. 41 cartons of milk on the wall.\n",
            "41 cartons of milk on the wall, 41 cartons of milk.\n",
            "You take one down pass it around. 40 cartons of milk on the wall.\n",
            "40 cartons of milk on the wall, 40 cartons of milk.\n",
            "You take one down pass it around. 39 cartons of milk on the wall.\n",
            "39 cartons of milk on the wall, 39 cartons of milk.\n",
            "You take one down pass it around. 38 cartons of milk on the wall.\n",
            "38 cartons of milk on the wall, 38 cartons of milk.\n",
            "You take one down pass it around. 37 cartons of milk on the wall.\n",
            "37 cartons of milk on the wall, 37 cartons of milk.\n",
            "You take one down pass it around. 36 cartons of milk on the wall.\n",
            "36 cartons of milk on the wall, 36 cartons of milk.\n",
            "You take one down pass it around. 35 cartons of milk on the wall.\n",
            "35 cartons of milk on the wall, 35 cartons of milk.\n",
            "You take one down pass it around. 34 cartons of milk on the wall.\n",
            "34 cartons of milk on the wall, 34 cartons of milk.\n",
            "You take one down pass it around. 33 cartons of milk on the wall.\n",
            "33 cartons of milk on the wall, 33 cartons of milk.\n",
            "You take one down pass it around. 32 cartons of milk on the wall.\n",
            "32 cartons of milk on the wall, 32 cartons of milk.\n",
            "You take one down pass it around. 31 cartons of milk on the wall.\n",
            "31 cartons of milk on the wall, 31 cartons of milk.\n",
            "You take one down pass it around. 30 cartons of milk on the wall.\n",
            "30 cartons of milk on the wall, 30 cartons of milk.\n",
            "You take one down pass it around. 29 cartons of milk on the wall.\n",
            "29 cartons of milk on the wall, 29 cartons of milk.\n",
            "You take one down pass it around. 28 cartons of milk on the wall.\n",
            "28 cartons of milk on the wall, 28 cartons of milk.\n",
            "You take one down pass it around. 27 cartons of milk on the wall.\n",
            "27 cartons of milk on the wall, 27 cartons of milk.\n",
            "You take one down pass it around. 26 cartons of milk on the wall.\n",
            "26 cartons of milk on the wall, 26 cartons of milk.\n",
            "You take one down pass it around. 25 cartons of milk on the wall.\n",
            "25 cartons of milk on the wall, 25 cartons of milk.\n",
            "You take one down pass it around. 24 cartons of milk on the wall.\n",
            "24 cartons of milk on the wall, 24 cartons of milk.\n",
            "You take one down pass it around. 23 cartons of milk on the wall.\n",
            "23 cartons of milk on the wall, 23 cartons of milk.\n",
            "You take one down pass it around. 22 cartons of milk on the wall.\n",
            "22 cartons of milk on the wall, 22 cartons of milk.\n",
            "You take one down pass it around. 21 cartons of milk on the wall.\n",
            "21 cartons of milk on the wall, 21 cartons of milk.\n",
            "You take one down pass it around. 20 cartons of milk on the wall.\n",
            "20 cartons of milk on the wall, 20 cartons of milk.\n",
            "You take one down pass it around. 19 cartons of milk on the wall.\n",
            "19 cartons of milk on the wall, 19 cartons of milk.\n",
            "You take one down pass it around. 18 cartons of milk on the wall.\n",
            "18 cartons of milk on the wall, 18 cartons of milk.\n",
            "You take one down pass it around. 17 cartons of milk on the wall.\n",
            "17 cartons of milk on the wall, 17 cartons of milk.\n",
            "You take one down pass it around. 16 cartons of milk on the wall.\n",
            "16 cartons of milk on the wall, 16 cartons of milk.\n",
            "You take one down pass it around. 15 cartons of milk on the wall.\n",
            "15 cartons of milk on the wall, 15 cartons of milk.\n",
            "You take one down pass it around. 14 cartons of milk on the wall.\n",
            "14 cartons of milk on the wall, 14 cartons of milk.\n",
            "You take one down pass it around. 13 cartons of milk on the wall.\n",
            "13 cartons of milk on the wall, 13 cartons of milk.\n",
            "You take one down pass it around. 12 cartons of milk on the wall.\n",
            "12 cartons of milk on the wall, 12 cartons of milk.\n",
            "You take one down pass it around. 11 cartons of milk on the wall.\n",
            "11 cartons of milk on the wall, 11 cartons of milk.\n",
            "You take one down pass it around. 10 cartons of milk on the wall.\n",
            "10 cartons of milk on the wall, 10 cartons of milk.\n",
            "You take one down pass it around. 9 cartons of milk on the wall.\n",
            "9 cartons of milk on the wall, 9 cartons of milk.\n",
            "You take one down pass it around. 8 cartons of milk on the wall.\n",
            "8 cartons of milk on the wall, 8 cartons of milk.\n",
            "You take one down pass it around. 7 cartons of milk on the wall.\n",
            "7 cartons of milk on the wall, 7 cartons of milk.\n",
            "You take one down pass it around. 6 cartons of milk on the wall.\n",
            "6 cartons of milk on the wall, 6 cartons of milk.\n",
            "You take one down pass it around. 5 cartons of milk on the wall.\n",
            "5 cartons of milk on the wall, 5 cartons of milk.\n",
            "You take one down pass it around. 4 cartons of milk on the wall.\n",
            "4 cartons of milk on the wall, 4 cartons of milk.\n",
            "You take one down pass it around. 3 cartons of milk on the wall.\n",
            "3 cartons of milk on the wall, 3 cartons of milk.\n",
            "You take one down pass it around. 2 cartons of milk on the wall.\n",
            "2 cartons of milk on the wall, 2 cartons of milk.\n",
            "You take one down pass it around. 1 cartons of milk on the wall.\n",
            "1 carton of milk on the wall, 1 carton of milk.\n",
            "You take one down pass it around.\n",
            "\n",
            "There are no more cartons of milk on the wall."
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile PracXXI.cpp\n",
        "\n",
        "#include <iostream>\n",
        "\n",
        "using namespace std;\n",
        "\n",
        "int main() {\n",
        "\n",
        "// Q1: To demonstrate a practical example of the while loop, create a simple \"countdown\" program:\n",
        "\n",
        "cout << \"Question 1 soltuion:\\n\";\n",
        "  int countd = 5;\n",
        "\n",
        "  while (countd) {\n",
        "    cout << countd << \"\\n\";\n",
        "    countd--;\n",
        "  }\n",
        "\n",
        "  cout << \"It's payday... Give me MY MONEY!\\n\";\n",
        "\n",
        "// // Q2: create a program that only print even numbers between 0 and 10 (inclusive):\n",
        "\n",
        "  cout << \"Question 2 solution:\\n\";\n",
        "  int k = 0;\n",
        "\n",
        "  while (k <= 10) {\n",
        "    cout << k << \"\\n\";\n",
        "    k = k + 2;\n",
        "  }\n",
        "\n",
        "// Q3: Use a while loop to reverse some numbers:\n",
        "\n",
        "  cout << \"Question 3 solution:\\n\";\n",
        "\n",
        "  int num = 12345;\n",
        "  // cout << \"Enter a number: \";\n",
        "  // cin >> num;\n",
        "  int revnum = 0;\n",
        "\n",
        "  while (num) {\n",
        "    revnum = (revnum * 10) + num % 10;\n",
        "    num = num / 10;\n",
        "  }\n",
        "\n",
        "  cout << \"Reverse number: \" << revnum << endl;\n",
        "\n",
        "  cout << \"Question 4 solution:\\n\";\n",
        "\n",
        "  int dice = 1;\n",
        "\n",
        "  while (dice <= 6) {\n",
        "    if (dice < 6) {\n",
        "      cout << \"No Yatzy\\n\";\n",
        "    }\n",
        "      else {\n",
        "    cout << \"Yatzy!\\n\";\n",
        "  }\n",
        "    dice = dice + 1;\n",
        "  }\n",
        "  return 0;\n",
        "}\n"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "ODZBNis4J_h1",
        "outputId": "df68210e-ce66-4afa-d519-a4d27fb3a028"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Writing PracXXI.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ PracXXI.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "-d-nSUA2WZZq",
        "outputId": "a5873cb8-4dee-4ba0-f83f-e7a2002e7b29"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Question 1 soltuion:\n",
            "5\n",
            "4\n",
            "3\n",
            "2\n",
            "1\n",
            "It's payday... Give me MY MONEY!\n",
            "Question 2 solution:\n",
            "0\n",
            "2\n",
            "4\n",
            "6\n",
            "8\n",
            "10\n",
            "Question 3 solution:\n",
            "Reverse number: 54321\n",
            "Question 4 solution:\n",
            "No Yatzy\n",
            "No Yatzy\n",
            "No Yatzy\n",
            "No Yatzy\n",
            "No Yatzy\n",
            "Yatzy!\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile PracXXII.cpp\n",
        "// Forbbiden for loops....\n",
        "#include <iostream>\n",
        "\n",
        "using namespace std;\n",
        "\n",
        "int main() {\n",
        "\n",
        "/*\n",
        "When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop:\n",
        "  Syntax:\n",
        "  for (statement 1; statement 2; statement 3) {\n",
        "  // code block to be executed\n",
        "}\n",
        "  Explanation:\n",
        "    Statement 1 is executed (one time) before the execution of the code block.\n",
        "    Statement 2 defines the condition for executing the code block.\n",
        "    Statement 3 is executed (every time) after the code block has been executed.\n",
        "*/\n",
        "\n",
        "  for (int i = 0; i < 5; i++) {\n",
        "    cout << i << \" \";\n",
        "  }\n",
        "\n",
        "cout << endl;\n",
        "/*\n",
        "Example explained:\n",
        "  Stmt 1: sets a variable before the loop starts (int i = 0 )\n",
        "  stmt 2: Defines the condition for the loop to run ( i must be less than 5). If the condition is true, the loop will start over again, if it is false, the loop will end/\n",
        "  stmt 3: increases a value (i++) each time the code block in the loop has been executed.\n",
        "*/\n",
        "\n",
        "  for (int j = 0; j <= 10; j = j + 2) {\n",
        "    cout << j << \" \";\n",
        "  }\n",
        "/*\n",
        "me own words:\n",
        "   stmt 1: we set a variable before the loop starts : int j has 0\n",
        "   stmt 2: we are defining the condition for the loop to run ~ j must be less than or equal to 10.\n",
        "    if the condition is true, the loop will start over again, it it is false, the loop will end.\n",
        "   stmt 3: increses a value ( j by 2) each time the code block in the loop has been executed.\n",
        "*/\n",
        "  return 0;\n",
        "}"
      ],
      "metadata": {
        "id": "aYLASCrfWnUA",
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "outputId": "2754184b-9f26-4b29-98bb-554fac34e5cb"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Overwriting PracXXII.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ PracXXII.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "HPZw8OedQha_",
        "outputId": "0609e0e5-e7ec-47f0-b2ca-1a4fa7f46509"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "0 1 2 3 4 \n",
            "0 2 4 6 8 10 "
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile PracXXIII.cpp\n",
        "// Nested for Loops\n",
        "#include <iostream>\n",
        "\n",
        "using namespace std;\n",
        "\n",
        "int main() {\n",
        "\n",
        "// Outer loop\n",
        "  for (int i = 1; i <= 2; i++) {\n",
        "    cout << \"Outer: \" << i << endl; //Executes 2 times\n",
        "\n",
        "    // Inner loop\n",
        "    for (int j = 1; j <= 3; j++) {\n",
        "      cout << \" Inner: \" << j << endl; //  Executes 6 times (2 * 3)\n",
        "    }\n",
        "  }\n",
        "\n",
        "  return 0;\n",
        "}"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "2KYWe89BUrt7",
        "outputId": "8f359462-7417-4d32-c3df-7d195e35dfd3"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Overwriting PracXXIII.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ PracXXIII.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "V6B09oQpfPLs",
        "outputId": "7e95516a-4f88-4e07-999d-edaee3fdd164"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Outer: 1\n",
            " Inner: 1\n",
            " Inner: 2\n",
            " Inner: 3\n",
            "Outer: 2\n",
            " Inner: 1\n",
            " Inner: 2\n",
            " Inner: 3\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile PracXXIV.cpp\n",
        "\n",
        "#include <iostream>\n",
        "\n",
        "using namespace std;\n",
        "\n",
        "int main() {\n",
        "\n",
        "  for(int i = 99; i > 1; i--) {\n",
        "    cout << i << \" cartons of milk on the wall. \" << i << \" cartons of milk. You take one down pass it around.\" << endl;\n",
        "    cout << i << \" cartons of milk on the wall!\" << endl;\n",
        "  }\n",
        "\n",
        "  return 0;\n",
        "}"
      ],
      "metadata": {
        "id": "WJP6aDQofW7u",
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "outputId": "d795f8a6-0802-43a9-b32b-91e37dacb377"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Overwriting PracXXIV.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ PracXXIV.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "RTZyopTs49mV",
        "outputId": "98c8b62c-74f8-4f86-91ec-d576abc4d400"
      },
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "99 cartons of milk on the wall. 99 cartons of milk. You take one down pass it around.\n",
            "99 cartons of milk on the wall!\n",
            "98 cartons of milk on the wall. 98 cartons of milk. You take one down pass it around.\n",
            "98 cartons of milk on the wall!\n",
            "97 cartons of milk on the wall. 97 cartons of milk. You take one down pass it around.\n",
            "97 cartons of milk on the wall!\n",
            "96 cartons of milk on the wall. 96 cartons of milk. You take one down pass it around.\n",
            "96 cartons of milk on the wall!\n",
            "95 cartons of milk on the wall. 95 cartons of milk. You take one down pass it around.\n",
            "95 cartons of milk on the wall!\n",
            "94 cartons of milk on the wall. 94 cartons of milk. You take one down pass it around.\n",
            "94 cartons of milk on the wall!\n",
            "93 cartons of milk on the wall. 93 cartons of milk. You take one down pass it around.\n",
            "93 cartons of milk on the wall!\n",
            "92 cartons of milk on the wall. 92 cartons of milk. You take one down pass it around.\n",
            "92 cartons of milk on the wall!\n",
            "91 cartons of milk on the wall. 91 cartons of milk. You take one down pass it around.\n",
            "91 cartons of milk on the wall!\n",
            "90 cartons of milk on the wall. 90 cartons of milk. You take one down pass it around.\n",
            "90 cartons of milk on the wall!\n",
            "89 cartons of milk on the wall. 89 cartons of milk. You take one down pass it around.\n",
            "89 cartons of milk on the wall!\n",
            "88 cartons of milk on the wall. 88 cartons of milk. You take one down pass it around.\n",
            "88 cartons of milk on the wall!\n",
            "87 cartons of milk on the wall. 87 cartons of milk. You take one down pass it around.\n",
            "87 cartons of milk on the wall!\n",
            "86 cartons of milk on the wall. 86 cartons of milk. You take one down pass it around.\n",
            "86 cartons of milk on the wall!\n",
            "85 cartons of milk on the wall. 85 cartons of milk. You take one down pass it around.\n",
            "85 cartons of milk on the wall!\n",
            "84 cartons of milk on the wall. 84 cartons of milk. You take one down pass it around.\n",
            "84 cartons of milk on the wall!\n",
            "83 cartons of milk on the wall. 83 cartons of milk. You take one down pass it around.\n",
            "83 cartons of milk on the wall!\n",
            "82 cartons of milk on the wall. 82 cartons of milk. You take one down pass it around.\n",
            "82 cartons of milk on the wall!\n",
            "81 cartons of milk on the wall. 81 cartons of milk. You take one down pass it around.\n",
            "81 cartons of milk on the wall!\n",
            "80 cartons of milk on the wall. 80 cartons of milk. You take one down pass it around.\n",
            "80 cartons of milk on the wall!\n",
            "79 cartons of milk on the wall. 79 cartons of milk. You take one down pass it around.\n",
            "79 cartons of milk on the wall!\n",
            "78 cartons of milk on the wall. 78 cartons of milk. You take one down pass it around.\n",
            "78 cartons of milk on the wall!\n",
            "77 cartons of milk on the wall. 77 cartons of milk. You take one down pass it around.\n",
            "77 cartons of milk on the wall!\n",
            "76 cartons of milk on the wall. 76 cartons of milk. You take one down pass it around.\n",
            "76 cartons of milk on the wall!\n",
            "75 cartons of milk on the wall. 75 cartons of milk. You take one down pass it around.\n",
            "75 cartons of milk on the wall!\n",
            "74 cartons of milk on the wall. 74 cartons of milk. You take one down pass it around.\n",
            "74 cartons of milk on the wall!\n",
            "73 cartons of milk on the wall. 73 cartons of milk. You take one down pass it around.\n",
            "73 cartons of milk on the wall!\n",
            "72 cartons of milk on the wall. 72 cartons of milk. You take one down pass it around.\n",
            "72 cartons of milk on the wall!\n",
            "71 cartons of milk on the wall. 71 cartons of milk. You take one down pass it around.\n",
            "71 cartons of milk on the wall!\n",
            "70 cartons of milk on the wall. 70 cartons of milk. You take one down pass it around.\n",
            "70 cartons of milk on the wall!\n",
            "69 cartons of milk on the wall. 69 cartons of milk. You take one down pass it around.\n",
            "69 cartons of milk on the wall!\n",
            "68 cartons of milk on the wall. 68 cartons of milk. You take one down pass it around.\n",
            "68 cartons of milk on the wall!\n",
            "67 cartons of milk on the wall. 67 cartons of milk. You take one down pass it around.\n",
            "67 cartons of milk on the wall!\n",
            "66 cartons of milk on the wall. 66 cartons of milk. You take one down pass it around.\n",
            "66 cartons of milk on the wall!\n",
            "65 cartons of milk on the wall. 65 cartons of milk. You take one down pass it around.\n",
            "65 cartons of milk on the wall!\n",
            "64 cartons of milk on the wall. 64 cartons of milk. You take one down pass it around.\n",
            "64 cartons of milk on the wall!\n",
            "63 cartons of milk on the wall. 63 cartons of milk. You take one down pass it around.\n",
            "63 cartons of milk on the wall!\n",
            "62 cartons of milk on the wall. 62 cartons of milk. You take one down pass it around.\n",
            "62 cartons of milk on the wall!\n",
            "61 cartons of milk on the wall. 61 cartons of milk. You take one down pass it around.\n",
            "61 cartons of milk on the wall!\n",
            "60 cartons of milk on the wall. 60 cartons of milk. You take one down pass it around.\n",
            "60 cartons of milk on the wall!\n",
            "59 cartons of milk on the wall. 59 cartons of milk. You take one down pass it around.\n",
            "59 cartons of milk on the wall!\n",
            "58 cartons of milk on the wall. 58 cartons of milk. You take one down pass it around.\n",
            "58 cartons of milk on the wall!\n",
            "57 cartons of milk on the wall. 57 cartons of milk. You take one down pass it around.\n",
            "57 cartons of milk on the wall!\n",
            "56 cartons of milk on the wall. 56 cartons of milk. You take one down pass it around.\n",
            "56 cartons of milk on the wall!\n",
            "55 cartons of milk on the wall. 55 cartons of milk. You take one down pass it around.\n",
            "55 cartons of milk on the wall!\n",
            "54 cartons of milk on the wall. 54 cartons of milk. You take one down pass it around.\n",
            "54 cartons of milk on the wall!\n",
            "53 cartons of milk on the wall. 53 cartons of milk. You take one down pass it around.\n",
            "53 cartons of milk on the wall!\n",
            "52 cartons of milk on the wall. 52 cartons of milk. You take one down pass it around.\n",
            "52 cartons of milk on the wall!\n",
            "51 cartons of milk on the wall. 51 cartons of milk. You take one down pass it around.\n",
            "51 cartons of milk on the wall!\n",
            "50 cartons of milk on the wall. 50 cartons of milk. You take one down pass it around.\n",
            "50 cartons of milk on the wall!\n",
            "49 cartons of milk on the wall. 49 cartons of milk. You take one down pass it around.\n",
            "49 cartons of milk on the wall!\n",
            "48 cartons of milk on the wall. 48 cartons of milk. You take one down pass it around.\n",
            "48 cartons of milk on the wall!\n",
            "47 cartons of milk on the wall. 47 cartons of milk. You take one down pass it around.\n",
            "47 cartons of milk on the wall!\n",
            "46 cartons of milk on the wall. 46 cartons of milk. You take one down pass it around.\n",
            "46 cartons of milk on the wall!\n",
            "45 cartons of milk on the wall. 45 cartons of milk. You take one down pass it around.\n",
            "45 cartons of milk on the wall!\n",
            "44 cartons of milk on the wall. 44 cartons of milk. You take one down pass it around.\n",
            "44 cartons of milk on the wall!\n",
            "43 cartons of milk on the wall. 43 cartons of milk. You take one down pass it around.\n",
            "43 cartons of milk on the wall!\n",
            "42 cartons of milk on the wall. 42 cartons of milk. You take one down pass it around.\n",
            "42 cartons of milk on the wall!\n",
            "41 cartons of milk on the wall. 41 cartons of milk. You take one down pass it around.\n",
            "41 cartons of milk on the wall!\n",
            "40 cartons of milk on the wall. 40 cartons of milk. You take one down pass it around.\n",
            "40 cartons of milk on the wall!\n",
            "39 cartons of milk on the wall. 39 cartons of milk. You take one down pass it around.\n",
            "39 cartons of milk on the wall!\n",
            "38 cartons of milk on the wall. 38 cartons of milk. You take one down pass it around.\n",
            "38 cartons of milk on the wall!\n",
            "37 cartons of milk on the wall. 37 cartons of milk. You take one down pass it around.\n",
            "37 cartons of milk on the wall!\n",
            "36 cartons of milk on the wall. 36 cartons of milk. You take one down pass it around.\n",
            "36 cartons of milk on the wall!\n",
            "35 cartons of milk on the wall. 35 cartons of milk. You take one down pass it around.\n",
            "35 cartons of milk on the wall!\n",
            "34 cartons of milk on the wall. 34 cartons of milk. You take one down pass it around.\n",
            "34 cartons of milk on the wall!\n",
            "33 cartons of milk on the wall. 33 cartons of milk. You take one down pass it around.\n",
            "33 cartons of milk on the wall!\n",
            "32 cartons of milk on the wall. 32 cartons of milk. You take one down pass it around.\n",
            "32 cartons of milk on the wall!\n",
            "31 cartons of milk on the wall. 31 cartons of milk. You take one down pass it around.\n",
            "31 cartons of milk on the wall!\n",
            "30 cartons of milk on the wall. 30 cartons of milk. You take one down pass it around.\n",
            "30 cartons of milk on the wall!\n",
            "29 cartons of milk on the wall. 29 cartons of milk. You take one down pass it around.\n",
            "29 cartons of milk on the wall!\n",
            "28 cartons of milk on the wall. 28 cartons of milk. You take one down pass it around.\n",
            "28 cartons of milk on the wall!\n",
            "27 cartons of milk on the wall. 27 cartons of milk. You take one down pass it around.\n",
            "27 cartons of milk on the wall!\n",
            "26 cartons of milk on the wall. 26 cartons of milk. You take one down pass it around.\n",
            "26 cartons of milk on the wall!\n",
            "25 cartons of milk on the wall. 25 cartons of milk. You take one down pass it around.\n",
            "25 cartons of milk on the wall!\n",
            "24 cartons of milk on the wall. 24 cartons of milk. You take one down pass it around.\n",
            "24 cartons of milk on the wall!\n",
            "23 cartons of milk on the wall. 23 cartons of milk. You take one down pass it around.\n",
            "23 cartons of milk on the wall!\n",
            "22 cartons of milk on the wall. 22 cartons of milk. You take one down pass it around.\n",
            "22 cartons of milk on the wall!\n",
            "21 cartons of milk on the wall. 21 cartons of milk. You take one down pass it around.\n",
            "21 cartons of milk on the wall!\n",
            "20 cartons of milk on the wall. 20 cartons of milk. You take one down pass it around.\n",
            "20 cartons of milk on the wall!\n",
            "19 cartons of milk on the wall. 19 cartons of milk. You take one down pass it around.\n",
            "19 cartons of milk on the wall!\n",
            "18 cartons of milk on the wall. 18 cartons of milk. You take one down pass it around.\n",
            "18 cartons of milk on the wall!\n",
            "17 cartons of milk on the wall. 17 cartons of milk. You take one down pass it around.\n",
            "17 cartons of milk on the wall!\n",
            "16 cartons of milk on the wall. 16 cartons of milk. You take one down pass it around.\n",
            "16 cartons of milk on the wall!\n",
            "15 cartons of milk on the wall. 15 cartons of milk. You take one down pass it around.\n",
            "15 cartons of milk on the wall!\n",
            "14 cartons of milk on the wall. 14 cartons of milk. You take one down pass it around.\n",
            "14 cartons of milk on the wall!\n",
            "13 cartons of milk on the wall. 13 cartons of milk. You take one down pass it around.\n",
            "13 cartons of milk on the wall!\n",
            "12 cartons of milk on the wall. 12 cartons of milk. You take one down pass it around.\n",
            "12 cartons of milk on the wall!\n",
            "11 cartons of milk on the wall. 11 cartons of milk. You take one down pass it around.\n",
            "11 cartons of milk on the wall!\n",
            "10 cartons of milk on the wall. 10 cartons of milk. You take one down pass it around.\n",
            "10 cartons of milk on the wall!\n",
            "9 cartons of milk on the wall. 9 cartons of milk. You take one down pass it around.\n",
            "9 cartons of milk on the wall!\n",
            "8 cartons of milk on the wall. 8 cartons of milk. You take one down pass it around.\n",
            "8 cartons of milk on the wall!\n",
            "7 cartons of milk on the wall. 7 cartons of milk. You take one down pass it around.\n",
            "7 cartons of milk on the wall!\n",
            "6 cartons of milk on the wall. 6 cartons of milk. You take one down pass it around.\n",
            "6 cartons of milk on the wall!\n",
            "5 cartons of milk on the wall. 5 cartons of milk. You take one down pass it around.\n",
            "5 cartons of milk on the wall!\n",
            "4 cartons of milk on the wall. 4 cartons of milk. You take one down pass it around.\n",
            "4 cartons of milk on the wall!\n",
            "3 cartons of milk on the wall. 3 cartons of milk. You take one down pass it around.\n",
            "3 cartons of milk on the wall!\n",
            "2 cartons of milk on the wall. 2 cartons of milk. You take one down pass it around.\n",
            "2 cartons of milk on the wall!\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile PracXXV.cpp\n",
        "\n",
        "#include <iostream>\n",
        "#include <cmath>\n",
        "\n",
        "using namespace std;\n",
        "\n",
        "int main() {\n",
        "\n",
        "// practical example of the for loop, let's create a program that counts to 100 by tens\n",
        "  cout << \"Question 1 solulu:\" << \"\\t\";\n",
        "  for( int i = 0; i <= 100; i+=10 ) {\n",
        "    cout << i << \" \";\n",
        "  }\n",
        "\n",
        "//create a program that only print even numbers between 0 and 10 (inclusive):\n",
        "  cout << endl << \"Question 2 solulu:\" << \"\\t\";\n",
        "\n",
        "  for( int j = 1; j <= 10; j+=2 ) {\n",
        "    cout << j << \" \";\n",
        "  }\n",
        "\n",
        " // print the powers of 2 up to 512\n",
        "  cout << \"\\n\" << \"Question 3 solulu:\" << \"\\t\";\n",
        "\n",
        "  for( int k = 1; k < 10; k++ ) {\n",
        "    cout << pow(2,k) << \" \";\n",
        "  }\n",
        "\n",
        "//create a program that prints the multiplication table for a specified number:\n",
        "   cout << \"\\n\" << \"Question 4 solulu:\" << \"\\t\";\n",
        "\n",
        "  return 0;\n",
        "}"
      ],
      "metadata": {
        "id": "YXG090Wj5Z92",
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "outputId": "28b2a29e-daf2-4b8b-f8bb-8ec0fe70df46"
      },
      "execution_count": 3,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Overwriting PracXXV.cpp\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "! g++ PracXXV.cpp -o C++Stuff\n",
        "! ./C++Stuff"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "Jo-TG1rSKsQo",
        "outputId": "495088ff-3732-4edb-aa96-11421c2dd2e0"
      },
      "execution_count": 4,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Question 1 solulu:\t0 10 20 30 40 50 60 70 80 90 100 \n",
            "Question 2 solulu:\t1 3 5 7 9 \n",
            "Question 3 solulu:\t2 4 8 16 32 64 128 256 512 \n",
            "Question 4 solulu:\t"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [],
      "metadata": {
        "id": "IBLTwTh7Kwb4"
      },
      "execution_count": null,
      "outputs": []
    }
  ]
}