/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:03 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@interface PXGIndexSetArray : NSObject {

	long long _capacity;
	long long _count;
	void* _indexSetReferences;

}

@property (assign,nonatomic) long long count;                         //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) void* indexSetReferences;              //@synthesize indexSetReferences=_indexSetReferences - In the implementation block
-(id)description;
-(void)dealloc;
-(long long)count;
-(void)removeAllIndexes;
-(void)setCount:(long long)arg1 ;
-(void*)indexSetReferences;
@end

