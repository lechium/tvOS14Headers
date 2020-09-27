/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:41:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CardServices.framework/CardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRSCardServing <CRSServing>
@required
-(BOOL)canSatisfyCardRequest:(id)arg1;
-(unsigned long long)servicePriorityForRequest:(id)arg1;
-(void)requestCard:(id)arg1 reply:(/*^block*/id)arg2;

@end
