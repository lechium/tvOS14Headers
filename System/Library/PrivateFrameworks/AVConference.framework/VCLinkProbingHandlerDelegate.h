/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCLinkProbingHandlerDelegate <NSObject>
@optional
-(void)didUpdateLinkPreferenceOrder:(id)arg1;

@required
-(void)startActiveProbingWithOptions:(id)arg1;
-(void)stopActiveProbingWithOptions:(id)arg1;
-(void)flushLinkProbingStatusWithOptions:(id)arg1;
-(void)queryProbingResultsWithOptions:(id)arg1;

@end

