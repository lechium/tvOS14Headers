/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:35 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PFQOSMeter : NSObject {

	AQ _counts[4];
	AQ _total;

}
-(id)description;
-(id)init;
-(BOOL)log:(long long)arg1 ;
-(void)recordQOS;
@end

