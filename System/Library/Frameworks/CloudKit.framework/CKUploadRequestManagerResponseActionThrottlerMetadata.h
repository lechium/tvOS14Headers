/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKUploadRequestManagerResponseActionThrottlerMetadata : NSObject {

	double _lastRunTime;
	long long _repeatCount;

}

@property (assign,nonatomic) double lastRunTime;                 //@synthesize lastRunTime=_lastRunTime - In the implementation block
@property (assign,nonatomic) long long repeatCount;              //@synthesize repeatCount=_repeatCount - In the implementation block
-(long long)repeatCount;
-(void)setRepeatCount:(long long)arg1 ;
-(double)lastRunTime;
-(void)setLastRunTime:(double)arg1 ;
@end
