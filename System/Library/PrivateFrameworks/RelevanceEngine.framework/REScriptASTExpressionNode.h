/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:12 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptASTNode;

@interface REScriptASTExpressionNode : REScriptASTNode {

	REScriptASTNode* _prefixExpression;
	REScriptASTNode* _binaryExpressions;

}

@property (nonatomic,readonly) REScriptASTNode * prefixExpression;               //@synthesize prefixExpression=_prefixExpression - In the implementation block
@property (nonatomic,readonly) REScriptASTNode * binaryExpressions;              //@synthesize binaryExpressions=_binaryExpressions - In the implementation block
+(id)parseBuffer:(id)arg1 error:(id*)arg2 ;
-(id)dependencies;
-(id)initWithPrefixExpression:(id)arg1 binaryExpression:(id)arg2 ;
-(REScriptASTNode *)prefixExpression;
-(REScriptASTNode *)binaryExpressions;
@end

