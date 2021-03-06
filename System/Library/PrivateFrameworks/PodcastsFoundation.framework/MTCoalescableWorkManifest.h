/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:01 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MTCoalescableWorkManifest : NSObject {

	/*^block*/id _workBlock;
	NSArray* _completions;

}

@property (nonatomic,copy) id workBlock;                         //@synthesize workBlock=_workBlock - In the implementation block
@property (nonatomic,retain) NSArray * completions;              //@synthesize completions=_completions - In the implementation block
-(id)description;
-(void)setCompletions:(NSArray *)arg1 ;
-(NSArray *)completions;
-(id)initWithWorkBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)manifestByReplacingWorkBlock:(/*^block*/id)arg1 appendingCompletion:(/*^block*/id)arg2 ;
-(id)workBlock;
-(id)initWithWorkBlock:(/*^block*/id)arg1 completions:(id)arg2 ;
-(void)setWorkBlock:(id)arg1 ;
@end

