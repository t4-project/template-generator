<%! import onlinejudge_template.library.cplusplus as cplusplus %>\
<%
    data['config']['indent'] = '\t'
    data['config']['scanner'] = 'cin'
    data['config']['printer'] = 'cout'
    data['config']['rep_macro'] = 'REP'
    data['config']['using_namespace_std'] = False
%>\
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++ (i))

${cplusplus.return_type(data)} solve(${cplusplus.arguments_types(data)}) {
	// edit here
}

// generated by online-judge-template-generator
int main() {
${cplusplus.read_input(data)}
	auto ans = solve(${cplusplus.arguments(data)});
${cplusplus.write_output(data)}
	return 0;
}
