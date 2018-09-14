{
    "targets": [
        {
            "target_name": "natasha",
            "sources": [ "src/main.cpp", "src/natasha.cpp" ],
            "include_dirs" : [
 	 			"<!(node -e \"require('nan')\")"
			]
        }
    ],
}