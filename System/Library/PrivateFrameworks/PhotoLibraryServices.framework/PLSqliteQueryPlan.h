/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSRegularExpression, NSString;

@interface PLSqliteQueryPlan : NSObject {

	NSMutableArray* _nodes;
	NSRegularExpression* _stringRepresentationRegex;

}

@property (copy,readonly) NSString * graphDescription; 
@property (copy,readonly) NSString * listDescription; 
-(id)init;
-(id)_stringRepresentationRegex;
-(void)addNodeWithIdentifier:(int)arg1 parentIdentifier:(int)arg2 unused:(int)arg3 nodeDescription:(id)arg4 ;
-(void)addNodeWithStringRepresentation:(id)arg1 ;
-(NSString *)listDescription;
-(NSString *)graphDescription;
-(void)_renderLevelWithParentIdentifier:(int)arg1 prefix:(id)arg2 intoLines:(id)arg3 ;
@end

