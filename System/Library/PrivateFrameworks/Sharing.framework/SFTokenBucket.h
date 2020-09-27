/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SFTokenBucket : NSObject {

	unsigned long long _bucketSize;
	unsigned long long _tokensAvailable;
	unsigned long long _tokenDurationTicks;
	unsigned long long _lastRefreshTicks;

}
-(id)init;
-(id)initWithBucketSize:(unsigned long long)arg1 tokenDurationTicks:(unsigned long long)arg2 ;
-(id)initWithBucketSize:(unsigned long long)arg1 tokenDurationSec:(double)arg2 ;
-(id)initWithBucketSize:(unsigned long long)arg1 tokensPerSec:(double)arg2 ;
-(BOOL)acquireToken;
@end
