/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CADManagedConfigurationHandler.h>

@class MCProfileConnection;

@interface CADMCProfileConnectionManagedConfigurationHandler : NSObject <CADManagedConfigurationHandler> {

	MCProfileConnection* _connection;

}

@property (nonatomic,readonly) MCProfileConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(MCProfileConnection *)connection;
-(BOOL)isOpenInRestrictionInEffect;
-(BOOL)mayShowLocalAccountsForBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(BOOL)mayShowLocalAccountsForTargetBundleID:(id)arg1 targetAccountManagement:(int)arg2 ;
-(id)filteredOpenInAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(int)arg3 ;
-(id)filteredOpenInOriginatingAccounts:(id)arg1 targetAppBundleID:(id)arg2 targetAccountManagement:(int)arg3 ;
-(id)initWithMCProfileConnection:(id)arg1 ;
@end
