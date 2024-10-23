<#
    If you want to use the "play" button in Visual Studio code, you need to
    modify the \.vscode\tasks.json file as follows:
            ,
            "args": [
                "-fdiagnostics-color=always",
                "-g",
                "${fileDirname}\\**.cpp",
                "-o",
                "${fileDirname}\\${fileBasenameNoExtension}.exe"
            ]

#>

g++ main.cpp Car.cpp Battery.cpp ElectricCar.cpp -o Cars
.\Cars.exe
