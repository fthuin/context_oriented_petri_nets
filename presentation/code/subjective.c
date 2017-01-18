Context declaration ::= @context( contextname [,capacity] )
Context activation ::= @activate( contextname )
Context deactivation ::= @deactivate( contextname )
Dependency relation declaration ::=
[addExclusionBetween:contextname and:contextname] |
[addCausalityFrom: contextname to: contextname ] |
[addImplicationFrom: contextname to: contextname ] |
[addRequirementTo: contextname of: contextname ] |
[addSuggestionFrom: contextname to: contextname ] |
[addConjunctionOf: {contextname} ] |
[addDisjunctionOf: {contextname} ]
