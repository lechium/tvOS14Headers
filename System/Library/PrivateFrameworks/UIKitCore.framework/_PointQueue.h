/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface _PointQueue : NSObject {

	NSMutableArray* _nonSentinelPoints;

}

@property (nonatomic,readonly) NSMutableArray * nonSentinelPoints;              //@synthesize nonSentinelPoints=_nonSentinelPoints - In the implementation block
-(id)init;
-(NSMutableArray *)nonSentinelPoints;
-(unsigned long long)effectiveStartIndexBasedOnLength;
@end
