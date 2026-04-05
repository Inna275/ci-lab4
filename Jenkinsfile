pipeline {

    agent {
        dockerContainer {
            image 'gcc:latest'
        }
    }

    stages {

        stage('Build') {
            steps {
                sh 'gcc main.c -o main'
            }
        }

        stage('Test') {
            steps {
                sh './main'
            }
        }

    }

}
