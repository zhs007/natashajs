{
    "targets": [
        {
            "target_name": "natasha",
            "sources": [ "src/main.cpp" ],
            "include_dirs" : [
 	 			"<!(node -e \"require('nan')\")"
			]
        }
    ],
}