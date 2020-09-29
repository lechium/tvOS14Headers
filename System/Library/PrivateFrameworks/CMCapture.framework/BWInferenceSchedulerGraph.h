/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:40 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol BWInferenceJobProvider;
@class NSMapTable;

@interface BWInferenceSchedulerGraph : NSObject {

	id<BWInferenceJobProvider> _head;
	NSMapTable* _directedEdgesByNode;

}
-(void)dealloc;
-(id)initWithHeadNode:(id)arg1 directedEdges:(id)arg2 ;
-(void)enumerateVideoDestinationsFromJob:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_visitJob:(id)arg1 withEnRouteAccumulation:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)visitProvidersWithBlock:(/*^block*/id)arg1 ;
@end

