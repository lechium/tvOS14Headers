/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTService.h>

@class RTDefaultsManager, RTPlatform, NSMutableArray;

@interface RTDiagnostics : RTService {

	RTDefaultsManager* _defaultsManager;
	RTPlatform* _platform;
	NSMutableArray* _diagnosticProviders;

}
+(BOOL)fileNameEligibleForCollection:(id)arg1 ;
+(id)createDiagnosticsURLWithError:(id*)arg1 ;
+(id)crashReports;
+(id)stringFromDateWithFormat;
+(BOOL)createArchiveSourceURL:(id)arg1 destinationURL:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(void)_shutdown;
-(void)fetchPathToDiagnosticFilesWithHandler:(/*^block*/id)arg1 ;
-(id)initWithDefaultsManager:(id)arg1 platform:(id)arg2 ;
-(void)logProcessDiagnosticInformation;
-(void)addDiagnosticProvider:(id)arg1 ;
-(void)fetchPathToBackupWithHandler:(/*^block*/id)arg1 ;
-(id)_collectDiagnosticFilesWithError:(id*)arg1 ;
-(void)_fetchPathToDiagnosticFilesWithHandler:(/*^block*/id)arg1 ;
-(id)_collectBackupWithError:(id*)arg1 ;
-(void)_fetchPathToBackupWithHandler:(/*^block*/id)arg1 ;
@end
