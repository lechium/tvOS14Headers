/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomePubSub/BPSPublisher.h>

@protocol _DKKnowledgeQuerying;
@class _DKEventQuery;

@interface BPSKnowledgeStorePublisher : BPSPublisher {

	_DKEventQuery* _query;
	id<_DKKnowledgeQuerying> _store;

}

@property (nonatomic,readonly) _DKEventQuery * query;                       //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) id<_DKKnowledgeQuerying> store;              //@synthesize store=_store - In the implementation block
-(id)init;
-(_DKEventQuery *)query;
-(id<_DKKnowledgeQuerying>)store;
-(void)subscribe:(id)arg1 ;
-(id)initWithEventQuery:(id)arg1 knowledgeStore:(id)arg2 ;
@end

