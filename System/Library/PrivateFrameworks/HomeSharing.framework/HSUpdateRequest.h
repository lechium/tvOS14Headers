/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HSRequest.h>

@interface HSUpdateRequest : HSRequest {

	long long _connectionType;

}
+(id)requestWithDatabaseRevision:(unsigned)arg1 sessionID:(unsigned)arg2 connectionType:(long long)arg3 ;
-(double)timeoutInterval;
-(BOOL)isConcurrent;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(id)initWithDatabaseRevision:(unsigned)arg1 sessionID:(unsigned)arg2 connectionType:(long long)arg3 ;
-(id)_bodyDataForDatabaseRevision:(unsigned)arg1 sessionID:(unsigned)arg2 ;
@end
