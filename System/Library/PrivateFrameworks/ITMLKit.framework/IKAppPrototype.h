/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableIndexSet, IKAppPrototypeIdentifier, IKDOMPrototype, NSDictionary, NSIndexSet;

@interface IKAppPrototype : NSObject {

	NSMutableIndexSet* _usageIndexes;
	IKAppPrototypeIdentifier* _identifier;
	IKDOMPrototype* _prototype;
	NSDictionary* _groupingValues;

}

@property (nonatomic,readonly) IKAppPrototypeIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,__weak,readonly) IKDOMPrototype * prototype;                  //@synthesize prototype=_prototype - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * groupingValues;                 //@synthesize groupingValues=_groupingValues - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * usageIndexes; 
-(IKAppPrototypeIdentifier *)identifier;
-(id)dsepm_viewElement;
-(void)dsepm_setViewElement:(id)arg1 ;
-(IKDOMPrototype *)prototype;
-(NSDictionary *)groupingValues;
-(NSIndexSet *)usageIndexes;
-(void)updateUsageIndexesWithChangeSet:(id)arg1 ;
-(id)initWithPrototype:(id)arg1 dataItem:(id)arg2 ;
-(void)addUsageForIndex:(long long)arg1 ;
-(void)removeUsageForIndex:(long long)arg1 ;
-(id)_sparseObjectFromObject:(id)arg1 usingPropertyPaths:(id)arg2 ;
@end
