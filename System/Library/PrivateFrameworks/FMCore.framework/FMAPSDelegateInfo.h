/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FMAPSDelegate;
@class NSString;

@interface FMAPSDelegateInfo : NSObject {

	NSString* _topic;
	id<FMAPSDelegate> _delegate;

}

@property (nonatomic,retain) NSString * topic;                               //@synthesize topic=_topic - In the implementation block
@property (assign,nonatomic,__weak) id<FMAPSDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<FMAPSDelegate>)delegate;
-(void)setDelegate:(id<FMAPSDelegate>)arg1 ;
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)topic;
@end

