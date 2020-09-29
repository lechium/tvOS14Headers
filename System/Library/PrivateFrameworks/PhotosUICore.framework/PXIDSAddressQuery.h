/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:57 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSMutableSet, NSMutableDictionary, NSSet;

@interface PXIDSAddressQuery : NSObject {

	unsigned long long _destinationsCount;
	NSMutableSet* _mutableRemainingDestinations;
	NSMutableDictionary* _mutableStashedResults;
	unsigned long long _resultsCount;
	/*^block*/id _resultHandler;

}

@property (nonatomic,copy,readonly) id resultHandler;                           //@synthesize resultHandler=_resultHandler - In the implementation block
@property (nonatomic,copy,readonly) NSSet * remainingDestinations; 
@property (nonatomic,readonly) BOOL isComplete; 
-(BOOL)isComplete;
-(id)resultHandler;
-(id)initWithDestinations:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)stashDestination:(id)arg1 withResult:(BOOL)arg2 ;
-(id)popStashedResults;
-(NSSet *)remainingDestinations;
@end

