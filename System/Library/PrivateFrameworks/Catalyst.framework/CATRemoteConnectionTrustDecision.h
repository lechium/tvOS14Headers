/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Catalyst/Catalyst-Structs.h>
@class CATRemoteConnection;

@interface CATRemoteConnectionTrustDecision : NSObject {

	CATRemoteConnection* mConnection;
	AB mHasResponded;
	id _trust;

}

@property (readonly) id trust;              //@synthesize trust=_trust - In the implementation block
-(void)dealloc;
-(id)trust;
-(id)initWithConnection:(id)arg1 trust:(SecTrustRef)arg2 ;
-(void)respondWithDecisionToAllowUntrustedConnection:(BOOL)arg1 ;
@end

