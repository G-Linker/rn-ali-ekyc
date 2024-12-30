import { useState } from 'react';
import { StyleSheet, Text, Button, ScrollView } from 'react-native';
import { install, getMetaInfo, verify } from 'rn-ali-ekyc';

export default function App() {
  const [installResult, setInstallResult] = useState<boolean>(false);
  const [metaInfoResult, setMetaInfoResult] = useState<any>();
  const [verifyResult, setVerifyResult] = useState<any>();

  return (
    <ScrollView style={styles.scroll} contentContainerStyle={styles.container}>
      <Button
        title="install sdk"
        onPress={() =>
          install()
            .then(() => setInstallResult(true))
            .catch(() => setInstallResult(false))
        }
      />
      <Text>Install Result: {JSON.stringify(installResult)}</Text>
      <Button
        title="getMetaInfo sdk"
        onPress={() =>
          getMetaInfo()
            .then((metaInfo) => setMetaInfoResult(metaInfo))
            .catch((error) => setMetaInfoResult(JSON.stringify(error)))
        }
      />
      <Text>GetMetaInfo Result: {JSON.stringify(metaInfoResult)}</Text>
      <Button
        title="verify sdk"
        onPress={() =>
          verify('xxxx')
            .then((metaInfo) => setVerifyResult(metaInfo))
            .catch((error) => setVerifyResult(JSON.stringify(error)))
        }
      />
      <Text>Verify Result: {JSON.stringify(verifyResult)}</Text>
    </ScrollView>
  );
}

const styles = StyleSheet.create({
  scroll: {
    flexGrow: 1,
  },
  container: {
    flex: 1,
    flexDirection: 'column',
    gap: 16,
    alignItems: 'center',
    justifyContent: 'center',
  },
  box: {
    width: 60,
    height: 60,
    marginVertical: 20,
  },
});
